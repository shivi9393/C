#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y;
    printf("enter year:");
    scanf("%d",&y);
    if((y%100!=0 )&&(y%4==0)||(y%100==0)&&(y%400==0))
    {
        printf("leap year");
    }
    else{
        printf("not a le3ap year");
    }
        
    return 0;
}
