#include<stdio.h>
int main()
{
    int i = 10;
    char ch = 'A';
    float a = 3.14;
    printf("%d %c %f\n", i,ch,a);
    printf("%d %f %f\n", i,ch,a);
    printf("%f %c %f\n", i,ch,a);
}