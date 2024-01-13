/*
[题目描述]
计算两个矩阵的乘法。
nxm阶的矩阵A乘以mxk价的矩阵B得到的C是nxk阶的，
且C[i][j] = A[i][0]xB[0][j]+...+A[i][m-1]xB[m-1][j](C[i][j]表示C短阵中第i行第j列元素)
*/

#include<iostream>

using namespace std;

int main()
{
	int n, m, k, a[114][114], b[114][114], c[114][114];
	cin >> n >> m >> k;
	
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> a[i][j];
	for(int i = 1; i <= m; i ++)
		for(int j = 1; j <= k; j ++)
			cin >> b[i][j];
			
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= k; j ++)
		{
			int sum = 0;
			for(int l = 1; l <= m; l ++)
			{
				sum += a[i][l] * b[l][j]; 
			}
			c[i][j] = sum;
		}
	}
	
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= k; j ++)
			cout << c[i][j] << " ";
		cout << endl;
	}
	
	system("pause");
	return 0;
}
