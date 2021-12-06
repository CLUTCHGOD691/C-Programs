#include<stdio.h>
int main()
{
    int fh, cent;
    printf("\nEnter temperature in Farenheit:2");
    scanf("%d", &fh);
    cent = (fh-32)*5/9;
    printf("\nTemperature in centigrades is : %d",cent);
}