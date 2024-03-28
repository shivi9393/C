#include<stdio.h>
int main(int argc, char const *argv[])
{
    int f,te,o,amt,to,fif,hun;
    printf("enter amnount: ");
    scanf("%d",&amt);
    hun=amt/100;
    fif=amt/50;
    te=amt/10;
    f=amt/5;
    to=amt/2;
    o=amt/1;
    printf("no of hunndered : %d",hun);
    printf("no of fifty: %d",fif);
    printf("no of ten : %d",te);
    printf("no of five : %d",f);
    printf("no of two : %d",to);
    printf("no of one : %d",o);
    
    return 0;
}
