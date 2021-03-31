#include <stdio.h>
#include <math.h>
#include "main.h"

int Find(double x, double e)
{
    double left = sin(x), right = 0, a = x, b = 1;
    int n = 0;
    while (fabs(left - right) >= e)
    {
        if (n % 2 == 0)
        {
            right = right + a / b;
        }
        else
        {
            right = right - a / b;
        }
        n++;
        a = a * x * x;
        b = b * 2 * n * (2 * n + 1);
    }
    return n;
}

int main()
{
    while(1)
    {
        double x;
        double e;
        printf("Enter x :\n");
        while (scanf("%lf", &x) != 1 || x <= 0)
        {
            printf("incorrect input, try again\n");
            while (getchar() != '\n')
            {

            }
        }
        printf("Enter e :\n");
        while (scanf("%lf", &e) != 1 || e <= 0)
        {
            printf("incorrect input, try again\n");
            while (getchar() != '\n')
            {

            }
        }
        printf("n = %d\n", Find(x, e));
    }
    return 0;
}