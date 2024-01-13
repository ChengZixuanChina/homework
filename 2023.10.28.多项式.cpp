/*
假定多项式的形式为x^n + x ^ (n-1)+ ... +2 ^ 2+2+1，请计算给定单度点数2和正整数n值的信况下这个多项式的值
，x在double范围内，开< 1000000。
多项式的值精确到小数点后两位，保证是终结果在double范国内.
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	double x, n, s = 0;
	cin >> x >> n;
	for(int i = n; i >= 0; i --)
	{
		s += pow(x, i);
	}
	cout << s << endl;
	
	system("pause");
	return 0;
}
