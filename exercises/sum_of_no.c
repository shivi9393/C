#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n,s=0;
    printf("enter 1st no: ");
    scanf("%d",&m);
    printf("enter 2nd no: ");
     scanf("%d",&n);
     while(m<=n){
        s=s+m;
        m=m+1;
        

     }
     printf(" sum: %d",s);

    return 0;
}
