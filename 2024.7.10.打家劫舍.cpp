#include <iostream>

using namespace std;

int main()
{
    int n, dp[1001];
    cin >> n;
    int a[1001];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = max(dp[1], a[2]);
    for (int i = 3; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }
    cout << dp[n] << endl;

    system("pause");
    return 0;
}