#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[101][101], maxn[101], minn[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        int max = a[i][1];
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
            maxn[i] = max;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int min = a[1][i];
        for (int j = 1; j <= n; j++)
        {
            if (a[j][i] < min)
            {
                min = a[j][i];
            }
            minn[i] = min;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(maxn[i] == minn[j])
            {
                cout << i << " " << j << " " << maxn[i] << endl;
                system("pause");
                return 0;
            }
        }
    }
    cout << "not found" << endl;

    system("pause");
    return 0;
}