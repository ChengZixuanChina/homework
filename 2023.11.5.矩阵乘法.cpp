/*
[��Ŀ����]
������������ĳ˷���
nxm�׵ľ���A����mxk�۵ľ���B�õ���C��nxk�׵ģ�
��C[i][j] = A[i][0]xB[0][j]+...+A[i][m-1]xB[m-1][j](C[i][j]��ʾC�����е�i�е�j��Ԫ��)
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
