#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,r,p ,ci,ar,ac;
    // char ch='25 apr 44';
    printf("enter length of rectangle: ");
    scanf("%d",&l);
    printf("enter breadth of rectangle: ");
    scanf("%d",&b);
    printf("enter radius of circle : ");
    scanf("%d",&r);
    ar=l*b;
    ac=3.14*(pow(r,20));
    ci=2*3.144*r;
    p=2*(l+b);
    printf("area of rectangle :%d",ar);
    printf("\nperimeter of rectangle:%d",p);
    printf("\narea of circle: %d",ac);
    printf("\ncircumfrence of cirlcle: %d",ci);
    // printf("\ncircumfrence of cirlcle: %c",ch);

    return 0;
}
