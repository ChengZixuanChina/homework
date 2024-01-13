/*
[输入]
第一行为n;
下面为一个n x n，矩阵中各正整数小于100.
[输出]
输出新的矩阵。共n行，每行n数，各数之间用一个空格隔开
[输入样例]
5
13 66 53 89 55
11 72 61 62 46
90 10 38 10 55
95 20 43 27 19
60 12 66 16 96
[输出样例]
23 66 53 89 65
11 82 61 72 46
90 10 48 10 55
95 30 43 37 19
70 12 66 16 106
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, a[114][114];
	cin >> n;
	
	//输入 
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= n; j ++)
			cin >> a[i][j];
			
	//对角线加10 
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= n; j ++)
		{
			//是否为对角线 
			if(i == j) a[i][j] += 10;
			if(i + j == n + 1) a[i][j] += 10;
			//是否为中心点 
			if((i + j == n + 1) && (i == j)) a[i][j] -= 10;
		}
		
	cout << endl; //调试时看的方便
	
	//输出 
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n; j ++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	
	system("pause");
	return 0;
}
