/*
����:����ָ���Ǿ����е�һ��Ԫ�أ����������е����ֵ�������������е���Сֵ��
[����]
�������һ��5��5�еľ���
[���]
������ڰ��㣬����������ڵ��С��м���ֵ����������ڣ����"not found"
[��������]
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25
[�������]
4 1 8
*/

#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	int a[15][15];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	int rowMax[15], colMin[15];
	for (int i = 0; i < n; i++)
	{
		int max = a[i][0];
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
		rowMax[i] = max;
	}
	for (int j = 0; j < n; j++)
	{
		int min = a[0][j];
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		colMin[j] = min;
	}
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (rowMax[i] == colMin[j])
			{
				cout << i + 1 << " " << j + 1 << " " << colMin[j] << endl;
				flag = 1;
			}
		}
	}
	if (!flag)
		cout << "NONE" << endl;
	return 0;
}
