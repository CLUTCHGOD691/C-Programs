#include<stdio.h>
int m;
int main()
{
    auto int i ;
    register int j ;
    static int k ;
    printf("%d%d%d%d",i,j,k,m);
}