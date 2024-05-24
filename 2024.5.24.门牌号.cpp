#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        sum += i;
        for (int j = 1; j <= i; j++)
        {
            if (sum - 3 * j == n)
            {
                cout << j << " " << i << endl;
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }

    system("pause");
    return 0;
}