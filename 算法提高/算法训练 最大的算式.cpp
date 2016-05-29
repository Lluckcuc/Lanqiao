算法训练 最大的算式
问题描述
　　题目很简单，给出N个数字，不改变它们的相对位置，在中间加入K个乘号和N-K-1个加号，（括号随便加）使最终结果尽量大。因为乘号和加号一共就是N-1个了，所以恰好每两个相邻数字之间都有一个符号。例如：
　　N=5，K=2，5个数字分别为1、2、3、4、5，可以加成：
　　1*2*(3+4+5)=24
　　1*(2+3)*(4+5)=45
　　(1*2+3)*(4+5)=45
　　……
输入格式
　　输入文件共有二行，第一行为两个有空格隔开的整数，表示N和K，其中（2<=N<=15, 0<=K<=N-1）。第二行为 N个用空格隔开的数字（每个数字在0到9之间）。
输出格式
　　输出文件仅一行包含一个整数，表示要求的最大的结果
样例输入
5 2
1 2 3 4 5
样例输出
120
样例说明
　　(1+2+3)*4*5=120

#include <iostream>
using namespace std;
#define max(a, b) a > b ? a : b;
long long int dp[16][16];
int sum[16];

int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        sum[i] =  sum[i-1] + temp;
    }
    for(int i = 1; i <= n; i++) {
        dp[i][0] = sum[i];
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= i-1 && j <= k; j++) {
            for(int l = 2; l <= n; l++) {
                dp[i][j] = max(dp[i][j], dp[l-1][j-1] * (sum[i] - sum[l-1]));
            }
        }
    }
    cout << dp[n][k];
    return 0;
}