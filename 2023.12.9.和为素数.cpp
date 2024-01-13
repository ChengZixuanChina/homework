#include<iostream>

using namespace std;

int a[10001], k, n, sum = 0;

void add(int start, int cnt, int total);
bool check_prime(int n);

int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	add(1, 1, 0);
	cout << sum << endl;
	system("pause");
	return 0;
}

void add(int start, int cnt, int total)
{
	if(start > n) return;
	if(cnt == k)
	{
		if(check_prime(total))
		{
			sum ++;
		}
		return;
	}
	// È¡ 
	add(start + 1, cnt + 1, total + a[start]);
	// ²»È¡ 
	add(start + 1, cnt, total);
}

bool check_prime(int n)
{
	if(n < 2) return false;
	for(int i = 2; i * i <= n; i ++)
	{
		if(n % i == 0) return false;
	}
	return true;
}
