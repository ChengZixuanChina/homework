#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[114514];
	gets(a);
	int lastspace = strlen(a);
	for(int i = strlen(a) - 1; i >= 0; i --)
	{
		if(a[i] == ' ')
		{
			for(int j = i + 1; j < lastspace; j ++)
				cout << a[j];
			cout << " ";
			lastspace = i;
		}
	}
	for(int i = 0; a[i] != ' '; i ++)
		cout << a[i];
	
	system("pause");
	return 0;
}
