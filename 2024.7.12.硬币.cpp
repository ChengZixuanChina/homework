#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, x, a[1001], dp[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        dp[i] = 10000000;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j < a[i])
                continue;
            dp[j] = min(dp[j], dp[j - a[i]] + 1);
        }
    }
    cout << dp[x] << endl;

    system("pause");
    return 0;
}