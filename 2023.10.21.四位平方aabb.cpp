#include<bits/stdc++.h>

using namespace std;

int main()
{
	for(int i = 1; i <= 9; i ++)
	{
		for(int j = 0; j <= 9; j ++)
		{
			int t = 1100 * i + 11 * j;
			if(pow(floor(sqrt(t)), 2) == t) cout << t << endl;
		}
	}
}
