#include<stdio.h>
int i = 100;
int j = 200;
int k = 300;
int main()
{
    auto int i =10;
    register int j = 20;
    static int k = 30;
    printf("%d%d%d",i,j,k)
}