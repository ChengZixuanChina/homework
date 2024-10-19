
#include <iostream>

using namespace std;

int f(int n, int m);

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s;
        cin >> s;
        int res = f(s, 2);
        cout << res << endl;
    }

    return 0;
}

int f(int n, int m)
{
    int sum = 1;
    if (n < m)
        return 0;
    for (int i = m; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += f(n / i, i);
        }
    }
    return sum;
}
