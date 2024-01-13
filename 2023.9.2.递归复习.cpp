#include<bits/stdc++.h>

using namespace std;

int s(int n, int k);

int main()
{
	int n, k;
	cin >> n >> k;
	cout << s(n, k) << endl;
	
	system("pause");
	return 0;
}

int s(int n, int k)
{
	if(n < k || k == 0) return 0;
	if(n == k || k == 1) return 1;
	return s(n - 1, k - 1) + k * s(n - 1, k);
}
