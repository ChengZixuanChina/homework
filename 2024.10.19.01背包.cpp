#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, m, w[40], c[40], dp[40][40];
    cin >> m >> n;
    memset(dp[0], 0, sizeof(dp[0]));
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> c[i];
        memset(dp[i], 0, sizeof(dp[i]));
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= 0; j--)
        {
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + c[i]);
        }
    }
    cout << dp[n][m] << endl;

    return 0;
}