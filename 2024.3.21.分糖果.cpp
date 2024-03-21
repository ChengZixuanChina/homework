#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    int sum = 0, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] -= sum / n;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 0)
        {
            a[i + 1] += a[i];
            cnt++;
        }
    }
    cout << cnt << endl;

    system("pause");
    return 0;
}