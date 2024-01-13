/*
[题目描述] 
打印杨辉三角形的前n(2<=n<=20)行
*/

//提示：本代码附有注释，不过应该没人看(应该没人不知道这种方法吧，就是递归啦，在数组里而已)
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, a[114][114];
	memset(a, 0, sizeof(a)); //先将数组a的值全部设置为0 
	cin >> n;
	a[1][1] = 1; //最上面的数设为1 
	for(int i = 2; i <= n; i ++) //从第二行开始 
	{
		a[i][1] = 1; //最左边设为1 
		for(int j = 2; j <= i; j ++) //从每行第二个开始 
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; //每个数为它左上+右上(数组里为左上+正上) 
		}
	}
	
	//正常的输出 
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= i; j ++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
