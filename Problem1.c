#include<stdio.h>
int main()
{
    int x, y;
    int* p;
    int* q;
    p = &x;
    q = &y;
    scanf("%d%d",p,q);
    printf("%.3lf",(*p+*q)/2.0);


    return 0;
}
