/*
����Ŀ������ 
�໤��ÿСʱ����һ�β��˵�Ѫѹ��
������ѹ��90-140֮�䲢������ѹ��60-90֮��(�����˵�ֵ)���֮Ϊ������
�ָ���ĳ�������ɴβ�����Ѫѹֵ�����㲡�˱�������Ѫѹ���Сʱ����
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[114][3], n, cnt = 0, tmp;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i][1] >> a[i][2];
	}
	for(int i = 1; i <= n; i ++)
	{
		if(a[i][1] >= 90 && a[i][1] <= 140 && a[i][2] >= 60 && a[i][2] <= 90)
		{
			cnt ++;
			if(cnt > tmp) tmp = cnt; 
		}
		else
		{
			cnt = 0;
		}
	}
	cout << tmp << endl;
	
	system("pause");
	return 0;
}
