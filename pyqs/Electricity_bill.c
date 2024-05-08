#include<stdio.h>
int main()
{
    int cid,units;
    float bill,surcharge;
    float rate1=1.20,r2=1.50,r3=1.80,r4=2.0;

    printf("enter ur cid :");
    scanf("%d",&cid);
    printf("enter ur units consumed :");
    scanf("%d",&units);
    if (units<=199){
        bill=units*rate1;
    }
    else if(units>=200 && units <=400) {
        bill =units*r2;

    }
    else if(units>=400&&units <=600){
        bill =units*r3;
    }
    else if(units>=600){
        bill=units*r4;
    }
    if (bill>=400){
        bill*0.15;
    }
    if(bill<100){
        bill=100;
    }
    printf("your bill is %.2f ",bill);


    return 0;
}