#include<stdio.h>
int main()
{
    /*size of the operator gives size of the data type in bytes*/
    char ch;
    int a;
    float b;
    printf("bytes occupied by ch = %d\n", sizeof (ch));
    printf("bytes occupied by a = %d\n", sizeof (a));
    printf("bytes occupied by b = %d\n", sizeof  (b));
}