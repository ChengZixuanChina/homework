#include<iostream>

using namespace std;

int a[26];

bool can_add_to(int m, int n);

int main()
{
	int m, n;
	cin >> m >> n;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	cout << (can_add_to(m, n) ? "YES" : "NO") << endl;
	
	system("pause");
	return 0;
}

bool can_add_to(int m, int n)
{
	if(a[n] == m) return true;
	else if(n == 0) return false;
	else return (can_add_to(m, n - 1) || can_add_to(m - a[n], n - 1));
}
