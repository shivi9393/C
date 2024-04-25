#include<stdio.h>
#define max 15
int main()
{
    int i,count=0;
    char s[max];
    fgets(s,max,stdin);
    for(i=0;s[i]!='\0';i++){
        count++;


    }

printf("%d",count);
    return 0;
}