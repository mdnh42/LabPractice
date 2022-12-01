#include<stdio.h>
int main()
{
    int arr[10];
    int* p = arr;

    for(int i = 0; i<5; i++)
    {
        scanf("%d",p);
        p++;
    }

    p = arr;
    for(int i = 0; i<5; i++)
    {
        printf("%d ",*p);
        p++;
    }
    return 0;
}
