/*
һ����������������ܱ�7������
��������ʮ���Ʊ�ʾ����ĳһλ�ϵ�����Ϊ7�������Ϊ��7��ص�����
��������С�ڵ��� n(n<100)��7�޹ص���������ƽ���͡�
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
