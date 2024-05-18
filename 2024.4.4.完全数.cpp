#include <iostream>

using namespace std;

int sum(int);

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (sum(i) == i)
            cout << i << endl;
    }

    system("pause");
    return 0;
}

int sum(int n)
{
    int s = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            s += i + n / i;
    }
    return s;
}