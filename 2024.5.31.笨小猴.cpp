#include <iostream>
#include <string.h>

using namespace std;

bool check(int n);

int main()
{
    string word;
    getline(cin, word);
    int hash[100];
    memset(hash, 0, sizeof(hash));
    for (int i = 0; i < word.length(); i++)
    {
        hash[(word[i] - 'a')]++;
    }
    int max = 0, min = word.length();
    for (int i = 0; i < word.length(); i++)
    {
        if (hash[word[i] - 'a'] > max)
        {
            max = hash[(word[i] - 'a')];
        }
        if (hash[word[i] - 'a'] < min)
        {
            min = hash[(word[i] - 'a')];
        }
    }
    if (check(max - min))
    {
        cout << "Lucky Word" << endl;
    }
    else
        cout << "No Answer" << endl;

    cout << max - min << endl;

    system("pause");
    return 0;
}

bool check(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}