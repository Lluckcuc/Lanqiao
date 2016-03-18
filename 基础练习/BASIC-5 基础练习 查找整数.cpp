BASIC-5 基础练习 查找整数  
时间限制：1.0s   内存限制：256.0MB
提交此题   锦囊1   锦囊2
问题描述
给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个。

输入格式
第一行包含一个整数n。

第二行包含n个非负整数，为给定的数列，数列中的每个数都不大于10000。

第三行包含一个整数a，为待查找的数。

输出格式
如果a在数列中出现了，输出它第一次出现的位置(位置从1开始编号)，否则输出-1。
样例输入
6
1 9 4 8 3 9
9
样例输出
2
数据规模与约定
1 <= n <= 1000。

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int t;
    cin >> t;
    int i;
    for (i = 0; i < n; i++)
        if (t == a[i]) break;
    if (i == n)
        cout << "-1";
    else
        cout << i + 1;
    return 0;
}