#include <iostream>
#include <string.h>

using namespace std;

struct P
{
    int age;
    string code;
};

int main()
{
    int n;
    P a[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].code >> a[i].age;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (a[j + 1].age > a[j].age && a[j + 1].age >= 60)
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].code << endl;
    }

    system("pause");
    return 0;
}