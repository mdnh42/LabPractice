
#include<stdio.h>
int main()
{
    int arr[5] = {110, 24, 50, 35, 40};
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        while(arr[i]%2==0)
        {
            sum += arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
