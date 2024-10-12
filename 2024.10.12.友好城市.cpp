
#include <bits/stdc++.h>

using namespace std;

struct Edge
{
    int south;
    int north;
} a[5001];

bool s(Edge &x, Edge &y)
{
    return x.south < y.south;
}

int main()
{
    int n, max = -1, dp[5001];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].south >> a[i].north;
    sort(a + 1, a + n + 1, s);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j >= 1; j--)
            if (a[i].north > a[j].north && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        if (dp[i] > max)
            max = dp[i];
    }
    cout << max << endl;

    return 0;
}