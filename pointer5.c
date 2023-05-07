#include<stdio.h>

int main()
{
    double arr[] = {12.3,1.23,12.8};
    double *p = arr;
    char *q = &(arr[0]);
    char *r = &(arr[3]);

    printf("%lf\n",*p);
    printf("%c\n",*q);
    printf("%c\n",*r);

    return 0;
}