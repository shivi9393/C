#include<stdio.h>

int main()
{
    int e,m,p,c,ip,tot,per;
    printf("enter marks in english:");
    scanf("%d",&e);
    printf("enter marks in maths:");
    scanf("%d",&m);
    printf("enter marks in physics:");
    scanf("%d",&p);
    printf("enter marks in chemistry:");
    scanf("%d",&c);
    printf("enter marks in ip:");
    scanf("%d",&ip);
    tot=e+m+c+p+ip;
    per=(tot*100)/500;
    printf("total marks: %d",tot);
    printf("\npercentage: %d",per);


    return 0;
}
