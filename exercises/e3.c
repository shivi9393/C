#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y,x=2001;
    printf("enter year:");
    scanf("%d",&y);
    int diff=y-x;
    int ly=diff/4;
    int nlp=diff-ly;
    int days=(ly*366)+(nlp*365)+1;
    if(days%7==0)
    {
        printf("sunday");

    }
    if(days%7==1)
    {
        printf("monday");

    }
    if(days%7==2)
    {
        printf("tuesday");
    }
     if(days%7==3)
    {
        printf("wednesday");
    } if(days%7==4)
    {
        printf("thursday");
    } if(days%7==5)
    {
        printf("friday");
    } if(days%7==6)
    {
        printf("sat");
    }

    return 0;
}
