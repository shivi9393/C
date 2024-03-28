#include<stdio.h>
int main(int argc, char const *argv[])
{
    int cop=0,con=0,coz=0,inp,i;
    char ch;
    while(1)
    {

        printf("\nenter number: ");
        scanf("%d",&inp);
    if(inp>0)
    {
        cop=cop+1;
    }
    else if(inp<0)
    {
    con=con+1;
    }
    else
    {
    coz=coz+1;
    }   
printf("press n to end:");
scanf(" %c",&ch);
if(ch=='n')
{
    printf("count of zero,+ve,-ve : %d %d %d ",coz,cop,con);
    break;
}
else
{
    continue;
}
}
}

