// wap to calculate sal given its basic pay=to be entered by user,hra=10%of basic pay ta=5%of basic pay
// define and hra and ta as constt and  use them to calculate salary of employee
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int hra,tot,bs,ta;
    printf("enter basic pay: ");
    scanf("%d",&bs);
    hra=bs*0.1;
ta=bs*0.05;
tot+bs+hra+ta;
printf("total salary of the employee is : %d mm",tot);
    return 0;
}
