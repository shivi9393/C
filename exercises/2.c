#include<stdio.h>
int main()
{
    
    int d ,f,m,cm,i;
    printf("enter distance (km): ");
    scanf("%d",&d);
    f=d*3280.84;
    printf("distance in feet: %d",f);
    m=d*1000;
    printf("\ndistance in inches: %d",m);
    cm=d*100000;
    printf("\ndistance in centimeter: %d",cm);
    i=d*39370;
    printf("\ndistance in inches: %d",i);


    return 0;
}
