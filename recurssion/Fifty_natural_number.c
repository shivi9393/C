#include<stdio.h>
int fun(int n);
int main()
{
    int n=1;
    fun(n);
    return 0;
}
int fun(n){
 if(n<=50){
    printf("%d\n",n);
 return fun(n+1);
 }

}