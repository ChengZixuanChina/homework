#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001], dp[1001];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0, res = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = 1; j <= i; j++)
        {
            if (a[j] > a[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }
    cout << res << endl;
    int q = 0, maxi, max = 114514, lj[1001] = {false};
    while (q < n)
    {
        maxi = max;
        for (int i = 1; i <= n; i++)
        {
            if (lj[i] == false && maxi >= a[i])
            {
                maxi = a[i];
                lj[i] = true;
                q++;
            }
        }
        cnt++;
    }
    cout << cnt << endl;

    system("pause");
    return 0;
}