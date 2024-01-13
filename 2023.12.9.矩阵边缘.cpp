#include<iostream>

using namespace std;

int main()
{
	int m, n, a[101][101], sum = 0;
	cin >> m >> n;
	for(int i = 1; i <= m; i ++)
		for(int j = 1; j <= n; j ++)
			cin >> a[i][j];
	for(int i = 1; i <= m; i ++)
		for(int j = 1; j <= n; j ++)
		{
			if(i == 1 || i == m || j == 1 || j == n)
			{
				sum += a[i][j];
			}
		}
	cout << sum << endl;
	system("pause");
	return 0;
}
