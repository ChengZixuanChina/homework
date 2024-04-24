#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string word, sentence;
    getline(cin, word);
    getline(cin, sentence);
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] += 'A' - 'a';
    }
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
            sentence[i] += 'A' - 'a';
    }
    int k = 0, j = 0, cnt = 0;
    for (int i = 0; i < sentence.size(); i++)
    {
        if (word[j] == sentence[i] && (word[j + 1] == sentence[i + 1] || (j == word.size() - 1 && sentence[i + 1] == ' ')))
        {
            k++;
            j++;
        }
        if (k == word.size() && sentence[i] == ' ')
        {
            if (cnt == 0)
                cout << i - word.size() << endl;

            cnt++;
            k = 0;
            j = 0;
        }
    }
    if (cnt > 0)
        cout << cnt << endl;
    else
        cout << -1 << endl;

    system("pause");
    return 0;
}