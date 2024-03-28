#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y;
    printf("enter year: ");
    scanf("%d",&y);
    if(y%400==0)
    {
        printf(" leap year");

    }
    else{
        printf("non leap year");
    }
    return 0;
}
