/*
����n,���� S=1!+2!+3!+...+n!��ĩ6λ(����ǰ�� 0)��
n<106��
n!��ʾǰn��������֮��
*/
#include<iostream>
#include<cmath>

using namespace std;

int jie(int n);//��n�Ľ׳� 

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
