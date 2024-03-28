#include<stdio.h>
int main()
{
    int c ,f ;
    printf("enetr temperature in farenhiet:");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("temperatur in celcius: %d",c);
    return 0;
}
