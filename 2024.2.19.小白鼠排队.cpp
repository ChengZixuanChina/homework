#include <iostream>
#include <cstring>

using namespace std;

struct Mouse
{
	int weight;
	string hat;
};

typedef Mouse M;

int main()
{
	int n;
	M mouthes[101];
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cin >> mouthes[i].weight >> mouthes[i].hat;
	}
	for (int i = 1; i <= n; i ++)
	{
		for (int j = 1; j < n; j ++)
		{
			if (mouthes[j].weight > mouthes[j + 1].weight)
			{
				swap(mouthes[j], mouthes[j + 1]);
			}
		}
	}
	for (int i = 1; i <= n; i ++)
	{
		cout << mouthes[i].hat << endl;
	}
	
	system("pause");
	return 0;
}
