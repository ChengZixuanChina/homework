#include <iostream>

using namespace std;

int days[2][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

bool check_day(int day_num);
int run_nian(int year);
bool is_huiwen(int day_num);
int next_day(int day_num);

int main()
{
    int day_start, day_end, now, sum = 0;
    cin >> day_start >> day_end;
    for (int i = day_start; i <= day_end; i = next_day(i))
    {
        if (is_huiwen(i))
            sum++;
    }
    cout << sum << endl;

    system("pause");
    return 0;
}

bool check_day(int day_num)
{
    int year = day_num / 10000;
    int month = (day_num % 10000) / 100;
    int day = day_num % 100;
    if (month > 12 || month < 1)
        return false;
    if (day > days[run_nian(year)][month - 1] || day < 1)
        return false;
    return true;
}

int run_nian(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else if (year % 400 == 0)
        return 1;
    return 0;
}

int next_day(int day_num)
{
    int year = day_num / 10000;
    int month = (day_num % 10000) / 100;
    int day = day_num % 100;
    if (check_day(day_num))
    {
        if (day < days[run_nian(year)][month - 1])
            day++;
        else if (month < 12)
        {
            day = 1;
            month++;
        }
        else
        {
            day = 1;
            month = 1;
            year++;
        }
    }
    return (year * 10000 + month * 100 + day);
}

bool is_huiwen(int day_num)
{
    string s = to_string(day_num);
    int i = 0, j = (s.size() - 1);
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}