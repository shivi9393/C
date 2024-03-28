#include<stdio.h>

int main()
{
    int s ,d,hra,gs;
    printf("enter salary:");
    scanf("%d",&s);
    d=((40*s)/100);
    hra=((20*s)/100);
    gs=d+s+hra;
    printf("total: %d",gs);
    return 0;
}
// gcc
// gcc 1.c -o main
// .\main.exe