#include <iostream>
#include <cmath>

using namespace std;

double arctanx(double, double);

int main()
{
    double pi = 6 * arctanx(1 / sqrt(3), 1e-6);
    printf("%.10lf\n", pi);

    system("pause");
    return 0;
}

double arctanx(double x, double lim)
{
    double sum = 0, num = x, den = 1;
    int sign = 1;
    while (num / den >= lim)
    {
        sum += sign * num / den;
        num *= x * x;
        den += 2;
        sign = -sign;
    }
    return sum;
}