/*
数学中经典的“鸡兔同笼”问题，
已知头共x 个，脚共y只，
问笼中的鸡和兔各有多少只?
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int t = (y - 2 * x) / 2, j = x - t;
	cout << "鸡" << j << "只， 兔" << t << "只。" << endl;
	
	system("pause");
	return 0;
}
