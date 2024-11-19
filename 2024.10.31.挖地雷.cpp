#include <iostream>
#include <string.h>
 
using namespace std;
 
int n, count[210], map[210][210], pre[210];
int dp[210], maxi = 0;

void output(int i);

int main()
{
    dp[0] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> count[i];
        dp[i] = count[i];
    }
    int start = 1, end = 1;
    while (start != 0 && end != 0)
    {
        cin >> start >> end;
        map[start][end] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        pre[i] = 0;
        for (int j = i - 1; j > 0; j--)
        {
            if (map[j][i] && dp[j] + count[i] > dp[i])
            {
                dp[i] = dp[j] + count[i];
                pre[i] = j;
            }
        }
        if (dp[maxi] < dp[i])
        {
            maxi = i;
        }
    }
    output(maxi);
    cout << dp[maxi] << endl;

    return 0;
}

void output(int i)
{
    if (i == 0)
    {
        return;
    }
    output(pre[i]);
    if (i != maxi)
        cout << i << "-";
    else
        cout << i << endl;
}

