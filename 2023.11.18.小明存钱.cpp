/*
[1]
290
230
280
200
300
170
340
50
90
80
200
60
[2]
290
230
280
200
300
170
330
50
90
80
200
60
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[14], b[14], cun = 0;
	bool flag = true;
	b[0] = 0;
	for(int i = 1; i <= 12; ++i)
	{
		cin >> a[i];
	}
	
	for(int i = 1; i <= 12; ++i)
	{
		b[i] = b[i - 1] + 300;
		if(b[i] - a[i] >= 0)
		{
			int m = b[i] - a[i];
			int t = m % 100;
			cun += m - t;
			b[i] = t;
		}
		else
		{
			cout << -i << endl;
			flag = false;
			break;
		}
	}
	if(flag)
	{
		cout << cun * 1.2 + b[12] << endl;
	}
	
	system("pause");
	return 0;
}
