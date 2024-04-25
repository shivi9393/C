#include<stdio.h>
int main()
{
    char s[500],r;
    int c=0,i;
    puts("enter a string: ");
    fgets(s,sizeof(s),stdin);
    puts("enter characte: ");
    scanf("%c",&r);
    for (i=0;s[i]!=0;i++){
        if(s[i]==r){
            c++;
        }

    }
    printf("%c appeared %d times ",r,c);
    return 0;
}