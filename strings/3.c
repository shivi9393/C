#include<stdio.h>
int main()
{
    char name[7];
    char copyname[10];
    gets(name);
    char *s,*q;
    *s=name;
    *q=*s;
    printf("%s",*q);
    return 0;
}