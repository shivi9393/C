// WAP to count money in piggy bank

#include<stdio.h>
int main()
{
 int on,total,to,fi,ten;
 printf("enter no of Rs.1 coin: ");
 scanf("%d",&on);
 printf("enter no of Rs.2 coin: ");
 scanf("%d",&to);
 printf("enter no of Rs.5 coin: ");
 scanf("%d",&fi);
 printf("enter no of Rs.10 coin: ");
 scanf("%d",&ten);
 total=1*on+2*to+fi*5+ten*10;
 printf("total money in the piggy bank: %d",total);
    
    
    return 0;
}
 