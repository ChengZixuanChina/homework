#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, z;
	int a[114514], b[114514];
	cin >> x >> y >> z;
	for(int i = 1; i <= x; i ++)
	{
		a[i] = 1;
		b[i] = 0;
	}
	for(int i = x + 1; i <= z + 1; i ++)
	{
		b[i] = y * a[i - 1];
		a[i] = a[i - 1] + b[i - 2];
	}
	cout << a[z + 1] << endl;
	
	system("pause");
	return 0;
}
