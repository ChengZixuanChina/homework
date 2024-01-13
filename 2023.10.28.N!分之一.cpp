/*
利用公式 e = 1 + 1/1! + 1/2! + ... + 1/n! 求e的值，要求保留小数点后10位。 
*/
#include<bits/stdc++.h>

using namespace std;

double jie(int n);//求n的阶乘

int main()
{
	int n;
	double e = 1;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		e += 1 / jie(i);
	}
	printf("%.10lf\n", e);
	
	system("pause");
	return 0;
}

double jie(int n)
{
	int s = 1;
	for(int i = 1; i <= n; i ++)
	{
		s *= i;
	}
	return s * 1.0000000;
}
