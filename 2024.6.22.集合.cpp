#include<iostream>

using namespace std;

int jh(int n, int k);

int main()
{
    int n, k;
    cin >> n >> k;
    int s = jh(n, k);
    cout << s << endl;

    system("pause");
    return 0;
}

int jh(int n, int k)
{
    if(n < k) return 0;
    if(k == 1) return 1;
    if(n == k) return 1;
    return jh(n - 1, k - 1) + k * jh(n - 1, k);
}