#include <iostream>

using namespace std;

int main()
{
    int n, a[101][101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    system("pause");
    return 0;
}