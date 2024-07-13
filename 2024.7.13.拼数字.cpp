#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, m, a[101];
    bool dp[101];
    memset(dp, false, sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[a[i]] = true;
    }
    cin >> m;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            dp[i] = dp[i] || dp[i - a[j]];
        }
    }
    cout << (dp[m] ? "True" : "False") << endl;

    system("pause");
    return 0;
}