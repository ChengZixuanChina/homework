#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int mode;
	cin >> mode;
	string code;
	getline(cin, code);
	if(mode == 1)
	{
			for(int i = 0; i < code.size(); i ++)
			{
				if(code[i] >= 'A' && code[i] <= 'Z')
				{
					if(code[i] - 5 < 'A')
					{
						code[i] = code[i] + 26;
					}
					code[i] = code[i] - 5;
				}
			}
			cout << code << endl;
	}
	if(mode == 2)
	{
			for(int i = 0; i < code.size(); i ++)
			{
				if(code[i] >= 'A' && code[i] <= 'Z')
				{
					if(code[i] + 5 < 'Z')
					{
						code[i] = code[i] - 26;
					}
					code[i] = code[i] + 5;
				}
			}
			cout << code << endl;
	}

	
	system("pause");
	return 0;
}
