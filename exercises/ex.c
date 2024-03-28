// amita got three laptops form online store as the store offered 40% off on purchase of three laptops wap to calculate the total bill if the tax on the total bill is 2% and the price of every laptop is 40k  
#include<stdio.h>
int main()
{
    int tot,tot2,off;
    tot=40000*3;
    off=tot*0.4;
    tot=tot-off;
    tot2=tot*0.02;
    tot=tot+tot2;
    printf("total : %d",tot);
    return 0;
}
