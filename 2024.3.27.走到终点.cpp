/*
指述
有一张 m * n 个小方格的地，一个机人位于地图的左上如图记为 St 的方)，它每步右或者向下移动一，如果到右下的终点(如图际记为 Finish 的地方] ，有多少种不同的方法?
*/

#include <iostream>

using namespace std;

int m, n, sum = 0;

void next_step(int x, int y);

int main()
{
    cin >> m >> n;
    next_step(1, 1);
    cout << sum << endl;

    system("pause");
    return 0;
}

void next_step(int x, int y)
{
    if (x > m || y > n)
        return;
    if (x == m && y == n)
    {
        sum++;
        return;
    }
    next_step(x + 1, y);
    next_step(x, y + 1);
}