#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

typedef long long ll;

ll suan(ll m, ll n, char str);

int main()
{
    stack<ll> s;
    string a;
    ll num = 0;
    getline(cin, a);
    for (int i = 0; a[i] != '@'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            num = num * 10 + (a[i] - '0');
        }
        else if (a[i] == ' ')
        {
            s.push(num);
            num = 0;
        }
        else
        {
            ll m = s.top();
            s.pop();
            ll n = s.top();
            s.pop();
            s.push(suan(n, m, a[i]));
        }
    }
    cout << s.top() << endl;

    return 0;
}

ll suan(ll m, ll n, char str)
{
    switch (str)
    {
    case '+':
        return m + n;
    case '-':
        return m - n;

    case '*':
        return m * n;
    case '/':
        return m / n;
    default:
        return 0;
    }
}