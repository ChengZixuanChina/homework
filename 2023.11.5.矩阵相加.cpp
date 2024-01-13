/*
[题目描述]
输入两个n行m列的矩阵4和B，输出它们的和A+B
*/

#include<iostream>

using namespace std;

int main()
{
	int n, m, a[114][114], b[114][114];
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> a[i][j];
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> b[i][j];
			
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= m; j ++)
			a[i][j] += b[i][j];
	}
	
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= m; j ++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	
	system("pause");
	return 0;
}
