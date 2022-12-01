#include<stdio.h>
void areaOfRadius(float r)
{
    float area = 3.1416 * r * r;
    printf("%f",area);
}
int main()
{
    float r, area;
    scanf("%f",&r);
    areaOfRadius(r);
}
