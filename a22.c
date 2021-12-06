#include<stdio.h>
int main()
{
    int a = 0xff;
    (a<<4>>12) ? printf("leftist") :printf("rightist");
}