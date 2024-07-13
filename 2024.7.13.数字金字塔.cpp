#include<iostream>

using namespace std;

const int MAX = 1001;

int main()
{
    int n, a[MAX][MAX], dp[MAX][MAX];
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + a[i][j];
        }
    }
    cout << dp[1][1] << endl;

    system("pause");
    return 0;
}