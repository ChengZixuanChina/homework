/*
����һ����λ����
Ҫ���������İ�λ�����λ���Ե���
����Ե��������
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
