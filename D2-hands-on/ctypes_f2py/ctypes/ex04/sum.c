
#include<stdio.h>

int sum_of_ints(int *a, int n)
{
    int i, s = 0;
    for (i = 0; i < n; ++i) s += a[i];
    printf("sum of %d elements is is %d\n",n,s);
    return s;
}

double sum_of_doubles(double *a, int n)
{
    int i;
    double s = 0.0;

    for (i = 0; i < n; ++i) s += a[i];
    printf("sum of %d elements is %g\n",n,s);
    return s;
}

