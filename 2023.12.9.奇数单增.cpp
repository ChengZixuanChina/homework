#include<iostream>

using namespace std;

int main()
{
	int n, a[501], to_sort[501], sort_len = 1;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++)
	{
		if(a[i] % 2 != 0)
		{
			to_sort[sort_len] = a[i];
			sort_len ++;
		}
	}
	for(int i = 1; i < sort_len; i ++)
	{
		for(int j = 1; j < sort_len - 1; j ++)
		{
			if(to_sort[j] > to_sort[j + 1]) swap(to_sort[j], to_sort[j + 1]);
		}
	}
	for(int i = 1; i < sort_len; i ++)
	{
		cout << to_sort[i] << ((i == sort_len - 1) ? "\n" : ",");
	}
	system("pause");
	return 0;
}
