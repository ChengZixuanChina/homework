/*
输入一个三位数，
要求把这个数的百位数与个位数对调，
输出对调后的数。
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, bai, ge;
	cin >> n;
	bai = n /100;
	ge = n % 10;
	n = n - bai * 100 + ge * 100 - ge + bai;
	cout << n << endl;
	
	system("pause");
	return 0;
}
