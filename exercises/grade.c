#include<stdio.h>
int main()
{
    int m,e,p,c,ip,tot,div;
    printf("enter marks in maths: ");
    scanf("%d",&m);
    printf("enter marks in english: ");
    scanf("%d",&e);
    printf("enter marks in chem: ");
    scanf("%d",&c);
    printf("enter marrks in physics : ");
    scanf("%d",&p);
    printf("enter marks in ip: ");
    scanf("%d",&ip);
    tot=m+e+p+ip+c;
    div=tot/5;
    
    return 0;
}
