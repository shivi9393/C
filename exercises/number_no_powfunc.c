#include<stdio.h>
int main(int argc, char const *argv[])
{
    int b,no,y,pow,i=1;
    printf("enter number: ");
    scanf("%d",&no);

    printf("enter power: ");
    scanf("%d",&pow);
        y=no;


    // for(i=1;i<pow;i++){
    while(i<pow){
i++;
    no=no*y;
    }
    printf("result: %d",no);

    return 0;
}
