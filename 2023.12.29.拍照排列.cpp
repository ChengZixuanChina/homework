/*
��ӰЧ��:
С�ƺ�������ȥ����ɽ��Ϊ�����ľ�ɫ���������Ӱ���
�������վ��һ�ţ�����ȫ������(�������ߵĽǶ�)�������մӰ����ߵ�˳��������ţ�Ů��ȫ�����ң������մӸߵ�����˳��������ţ�
�������Ǻ�Ӱ��Ч����ʲô����(�����˵���߶���ͬ)?
6
male 1.72
male 1.78
female 1.61
male 1.65
female 1.70
female 1.56
*/
//��:������֣�
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

struct P
{
	string sex;
	double high;
	bool operator< (const P &another) const
	{
		if(sex != another.sex)
		{
			return another.sex == "male" ? false : true; // �е�����Ů������ 
		}
		if(sex == "male")
		{
			return another.high > high; // �������Ӱ����ߵ�˳��������� 
		}
		else //�������Ů�� 
		{
			return another.high < high; // Ů�����Ӹߵ�����˳��������� 
		}
	}
	friend istream & operator>>(istream &in, P &A) // ����͵��������cin��������һ���� 
	{
    	in >> A.sex >> A.high;
    	return in;
	}
};

int main()
{
	P a[101];
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n - 1; j ++)
		{
			if(a[j + 1] < a[j])
			{
				swap(a[j + 1], a[j]);
			}
		}
	}
	for(int i = 1; i <= n; i ++)
	{
		printf("%.2lf ", a[i].high);
	}
	cout << endl;
	
	system("pause");
	return 0;
}
