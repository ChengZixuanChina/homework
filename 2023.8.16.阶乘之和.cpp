#include <iostream>

using namespace std;

int jie(int i);

int main()
{
    int s = 0; 
    for (int i = 1; i <= 10; i++)
    {
        s += jie(i);
    }
    cout << s % 100000 << endl;

    system("pause");
    return 0;
}

int jie(int i)
{
    int t = 1;
    for(int j = 1; j <= i; j++)
    {
        t *= j;
    }

    return t;
}
