#include<stdio.h>
int main(int argc, char const *argv[])
{
    int cp, p,l,sp;
    printf("enter cost price: ");
    scanf("%d",&cp);
    printf("enter selling price: ");
    scanf("%d",&sp);
    if(sp<cp)
    {
        l=cp-sp;
        printf("loss: %d",l);

    }
    else
    {
        if(cp>sp){
            p=cp-sp;
            printf("profit: %d",p);
        }
    }
    return 0;
}
