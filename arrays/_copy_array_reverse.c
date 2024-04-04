#include<stdio.h>
int main()
{
    int a[5],a1[5],i;
    printf("enter elements in array: ");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);

    }
    for(i=4;i>=0;i--){
        a1[4-i]=a[i];
    }
    for(i=0;i<=4;i++)
    {
        printf("%d ",a1[i]);
    }
    return 0;
}