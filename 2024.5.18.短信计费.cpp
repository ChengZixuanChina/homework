#include <iostream>

using namespace std;

int main()
{
    int n, a[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 70 == 0)
        {
            sum += a[i] / 70 * 0.1;
        }
        else
            sum += (a[i] / 70 + 1) * 0.1;
    }
    cout << sum << endl;

    system("pause");
    return 0;
}