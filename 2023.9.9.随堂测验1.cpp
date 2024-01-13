/*
有一个牧场，牧场上的牧草每天都在匀速生长，
这片牧场可供15 头牛吃 20 天，或可供20 头牛吃 10 天，
那么，这片牧场每天新生的草量可供几头牛吃 1天?
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s1 = 15 * 20;
	int s2 = 20 * 10;
	cout << (s1 - s2) / (20 - 10) << endl;
	
	system("pause");
	return 0;
}
