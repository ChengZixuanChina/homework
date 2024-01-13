/*
【题目描述】 
监护室每小时测量一次病人的血压，
若收缩压在90-140之间并且舒张压在60-90之间(包含端点值)则称之为正常，
现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。
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
