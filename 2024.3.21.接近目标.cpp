#include <iostream>

using namespace std;

int main()
{
    int n, a[101], sum = 0, cha = 114514;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d,", &a[i]);
    }
    cin >> sum;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (abs(sum - (a[i] + a[i + j])) < abs(cha))
            {
                cha = sum - (a[i] + a[i + j]);
            }
        }
    }
    cout << sum - cha << endl;

    system("pause");
    return 0;
}