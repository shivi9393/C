#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,b2, r1,r2;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);
b2=pow(b,2);
d=sqrt(b2-4*a*c);
r1=(-b+d)/2*a;
r2=(-b-d)/2*a;
printf("root1: %d",r1);
printf("\nroot2: %d",r2);

    return 0;
}
