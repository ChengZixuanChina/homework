#include <iostream>

using namespace std;

int before[101];

void show_path(int i);

int main()
{
    int n, min = 114514, map[101][101], dp[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
        dp[i] = 114514;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((map[j][i] > 0) && (dp[i] > dp[j] + map[j][i]) && (dp[j] != 114514))
            {
                dp[i] = dp[j] + map[j][i];
                before[i] = j;
            }
        }
    }
    cout << "minlong=" << dp[n] << endl;
    show_path(n);

    return 0;
}

void show_path(int i)
{
    if (before[i] == 0)
    {
        cout << i;
        return;
    }
    show_path(before[i]);
    cout << ' ' << i;
}