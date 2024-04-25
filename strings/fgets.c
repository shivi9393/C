#include<stdio.h>
#define max 15
int main()
{
    char b[max];
    fgets(b,max,stdin);
    printf("the string: %s",b);

    return 0;
}