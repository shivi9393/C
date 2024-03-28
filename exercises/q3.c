// write a prog to calculate the amont of money in piggy bank given the  coins 20 10 5 2 1
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int tw,te,fi,to,on,tot;
    printf("enter no of coins of rs.20: ");
    scanf("%d",&tw);
    printf("enter no of coins of rs.10: ");
    scanf("%d",&te);
     printf("enter no of coins of rs.5: ");
    scanf("%d",&fi);
     printf("enter no of coins of rs.2: ");
    scanf("%d",&to);
     printf("enter no of coins of rs.1: ");
    scanf("%d",&on);
tw=tw*20;
te=te*10;
fi=fi*5;
to=to*2;
on=on*1;
tot=tw+te+on+to+fi;
printf("total money :%d ",tot);
    

    return 0;
}
