#include<stdio.h>
int main(int argc, char const *argv[])
{
    int co=21,user,comp;
    while(1)
{
    printf("user: you pick-->(1,4) \n");
    scanf("%d",&user);
    if(user>4 || user<1){
        printf("try again with a number between 1&4");
        continue;
        }
    comp=5-user;
    printf("computer picked:%d\n",comp);
    co=co-5;
    if(co==1)
    {
        printf("user lost");
    break;
    }
}
}
