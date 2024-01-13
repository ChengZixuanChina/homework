/*
一个正整数，如果它能被7整除，
或者它的十进制表示法中某一位上的数字为7，则称其为与7相关的数。
现求所有小于等于 n(n<100)与7无关的正整数的平方和。
*/

#include<bits/stdc++.h>

using namespace std;

bool related_to_seven(int n);

int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		if(!related_to_seven(i)) cout << i << " - " << i * i << endl;
	}
	
	system("pause");
	return 0;
}

bool related_to_seven(int n)
{
	if (n % 7 == 0) return true;
	while(n != 0)
	{
		if(n % 10 == 7) return true;
		n /= 10;
	}
}
