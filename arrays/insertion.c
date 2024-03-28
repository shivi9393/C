// insertion and deletion in one code 
#include<stdio.h>
int main()
{
    int a[5],i,x;
    printf("enter values in array: ");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<=4;i++){
        printf("value in array : %d\n",a[i]);
    }
    printf("which index value you want to delete: ");
    scanf("%d",&x);
    if(x>5){
        printf("the location doesnot exist");

    }
    for(i=x;i<5;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<5;i++){
        printf("the elemnt at a[%d] is %d\n ",i+1,a[i]);
    }
    return 0;
}