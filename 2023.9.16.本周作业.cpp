/*
求n个1992的积的末两位数是多少?
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		sum *= 1992;
		sum %= 100;
	}
	cout << sum << endl;
	
	system("pause");
	return 0;
}
