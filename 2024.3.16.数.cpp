#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    int n, sum = 0, t_max = -1, a[101], h[1001];
    memset(h, 0, sizeof(h));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        h[a[i]]++;
        sum += a[i];
        if(a[i]>t_max) t_max = a[i];
    }
    float avg = sum * 1.0 / n * 1.0;
    float middle = (n % 2 == 0 ? (a[n / 2] + a[n / 2 + 1]) / 2.0 : a[n / 2 + 1]);
    int max = -1, max_i = 0;
    for (int i = 1; i <= t_max; i++)
    {
        if (h[i] >= h[max])
        {
            max = h[i];
            max_i = i;
        }
    }

    printf("%.2f %.2f %d \n", avg, middle, max_i);

    system("pause");
    return 0;
}