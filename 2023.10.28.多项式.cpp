/*
�ٶ�����ʽ����ʽΪx^n + x ^ (n-1)+ ... +2 ^ 2+2+1�������������ȵ���2��������nֵ���ſ����������ʽ��ֵ
��x��double��Χ�ڣ���< 1000000��
����ʽ��ֵ��ȷ��С�������λ����֤���ս����double������.
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
