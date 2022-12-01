#include<stdio.h>
void swap(int* arr[], int* n)
{
    for(int i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp;
                temp = *arr[i];
                *arr[i] = *arr[i+1];
                *arr[i+1] = temp;
            }
        }

    return 0;
}
int main()
{
    int* n = 10;
    int* arr[10] = {5, 6, 8, 9, 10, 7, 1, 3, 2, 4};

    for(int i= 0; i<n; i++)
    {
        swap(&arr[], &n);
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
