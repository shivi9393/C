#include<stdio.h>
int main()
{
    int arr[5],i,num1,num2;
    printf("Enter elements of the array");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&arr[i]);
    }
    num1=arr[0];
    num2=arr[0];
    for(i=0;i<=4;i++)
    {
      if(arr[i]>num1)
      {
        num1=arr[i];
      }
      if(arr[i]<num2)
      {
        num2=arr[i];
      }
    }
    printf("The greatest element of the array is:%d\n",num1);
    printf("The smallest element of the array is:%d\n",num2);
    printf("their difference is : %d ",num1-num2);

}