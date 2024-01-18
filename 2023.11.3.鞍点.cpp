/*
鞍点:鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
[输入]
输入包含一个5行5列的矩阵
[输出]
如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"
[输入样例]
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25
[输出样例]
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
