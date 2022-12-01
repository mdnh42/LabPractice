#include<stdio.h>
int main()
{
    char str[11] ="programming";
    int len = strlen(str);
    int i = 0, ans=0;
    while(str[i] != '\0')
    {
        if(str[i]%2 == 0)
            ans = 0;
        i++;
    }
    if(ans == 1)
    {
        printf("Prime");
    }
    printf("%s",str);
    return 0;
}
