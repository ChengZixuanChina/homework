#include<iostream>

using namespace std;

int main()
{
    int n, f[101];
    f[0] = 0;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        f[i] = f[i - 1] + i;
        sum += f[i];
    }
    cout << sum << endl;

    system("pause");
    return 0;
}