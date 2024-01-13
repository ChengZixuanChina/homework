/*
[题目描述]
nxm矩阵大部分元素是0的矩阵称为稀疏矩阵。
假设有k个非0元素，则可把稀疏矩阵用Kx3的阵简记之，
其中第一列是行号，第二列是列号，第三列是该行、该列下的非0元素的值。
*/

#include<iostream>

using namespace std;

int main()
{
	int n, m, a[114][114], b[114][4], count = 0;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
		{
			cin >> a[i][j];
			if(a[i][j] != 0)
			{
				++ count;
				b[count][1] = i;
				b[count][2] = j;
				b[count][3] = a[i][j];
			}
		}
		
	for(int i = 1; i <= count; i ++)
			cout << b[i][1] << " " << b[i][2] << " " << b[i][3] << endl;
	
	system("pause");
	return 0;
}
