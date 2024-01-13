/*
输入n,计算 S=1!+2!+3!+...+n!的末6位(不含前导 0)。
n<106，
n!表示前n个正整数之积
*/
#include<iostream>
#include<cmath>

using namespace std;

int jie(int n);//求n的阶乘 

int main()
{
	int n, s = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		s += jie(i);
	}
	cout << s << endl;
	
	system("pause");
	return 0;
}

int jie(int n)
{
	int s = 1;
	for(int i = 1; i <= n; i ++)
	{
		s *= i;
	}
	return s;
}
