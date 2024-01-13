/*
给出两幅相同大小的黑白图像(用0-1矩阵)表示，求它们的相似度。 
说明:若两幅图像在相同位置上的像素点颜色相同，则称它们在该位置具有相同的像素点。
两幅图像的相似度定义为相同像素点数占总像素点数的百分比。
[输入样例]
3 3
1 0 1
0 0 1
1 1 0
1 1 0
0 0 1
0 0 1
[输出样例]
44.44%
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, deg = 0;
	cin >> n >> m;
	int sum = n * m; 
	int a[114][114], b[114][114];
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> a[i][j];
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= m; j ++)
			cin >> b[i][j];
			
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= m; j ++)
		{
			if(a[i][j] == b[i][j]) deg += 1;
		}
	}
	printf("%.2f%%\n", (deg * 1.0 / sum * 1.0 * 100));
	
	system("pause");
	return 0;
}
