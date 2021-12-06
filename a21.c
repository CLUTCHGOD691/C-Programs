#include<stdio.h>
int main()
{
    int i = 32, j = 65, k;

    k = j ^ 32;
    printf("k = %d\n",k);

    k = j << 2;
    printf("k = %d\n",k);

    k = i >> 5;
    printf("k = %d\n",k);
}