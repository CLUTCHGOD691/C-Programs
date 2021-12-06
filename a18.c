#include<stdio.h>
int main()
{
    int x = 10,y,z;

    z = y = x;
    y -= x--;
    z -= --x;
    x -= --x -x--;

    printf("y = %d z = %d x = %d",y,z,x);
}