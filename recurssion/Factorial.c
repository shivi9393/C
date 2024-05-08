#include<stdio.h>
int fun(int n);
int main()
{
    int n,total;
    printf("enter limit: ");
    scanf("%d",&n);
    total=fun(n);
    printf("%d",total);
    return 0;
}
int fun(n){
    if(n==0){
        return 1;

    }
    else{
        return n*fun(n-1);
    }
}