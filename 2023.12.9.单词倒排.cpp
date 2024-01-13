#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int lastspace = a.size() + 1;
	for(int i = a.size(); i >= 0; i --)
	{
		if(a[i] == ' ' || i == 0)
		{
			int t = i == 0 ? 0 : (i + 1);
			for(int j = t; j < lastspace; j ++)
			{
				cout << a[j];
			}
			lastspace = i;
			cout << ((i == 0) ? "\n" : " ");
		}
	}
	system("pause");
	return 0;
}
