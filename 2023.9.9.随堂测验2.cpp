/*
已知小明有 n 元，他买了一本书，
这本书原价为 m 元，现在打 8折出售。
求小明还剩多少钱(保留 2 位小数)。
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	float n, m;
	cin >> n >> m;
	printf("%.2f\n", (n - m * 0.8));
	
	system("pause");
	return 0;
}
