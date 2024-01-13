#include <iostream>

using namespace std;

int main()
{
    int n, a[101][101], score[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            score[i] += a[i][j];
        }
    }
    int max = -1, max_id = 0;
    for (int i = 1; i <= n; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            max_id = i;
        }
    }
    cout << max_id << endl;

    system("pause");
    return 0;
}