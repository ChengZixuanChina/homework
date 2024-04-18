#include <iostream>

using namespace std;

int sum(int);

int main()
{
    for (int i = 1;; i++)
    {
        if (sum(sum(i)) == i && i != sum(i))
        {
            cout << min(i, sum(i)) << " " << max(i, sum(i)) << endl;
            break;
        }
    }

    system("pause");
    return 0;
}

int sum(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s += i;
    }
    return s;
}