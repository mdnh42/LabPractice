#include<stdio.h>
#include<string.h>
void print_upper_case(char a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            a[i]-=32;
        }
    }
    printf("%s",a);
}
int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    print_upper_case (str, len);
    return 0;
}
