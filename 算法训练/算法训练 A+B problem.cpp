算法训练 A+B problem
问题描述
　　Given two integers A and B, your task is to output their sum, A+B.
输入格式
　　The input contains of only one line, consisting of two integers A and B. (0 ≤ A,B ≤ 1 000)
输出格式
　　The output should contain only one number that is A+B.
样例输入
1 1
样例输出
2

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}