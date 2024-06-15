#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int l = a.size() - 1;
    if (a[l] == ' ' && a[l - 1] == '!')
    {
        for (int i = l - 2; i >= 0; i--)
        {
            cout << a[i];
        }
    }
    cout << endl;

    system("pause");
    return 0;
}