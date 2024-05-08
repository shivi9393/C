#include<stdio.h>
int fun(n);
int main()
{
    int n=3;
    printf("%d",fun(n));
    return 0;
}
int fun(int n){
    if(n!=0){
        return n+fun(n-1);
    }
    else{
        return n; 
    }
}