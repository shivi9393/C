#include<stdio.h>
void main()
{
  int m,min,i;
  printf("enter number of elements in the array:");
  scanf("%d",&m);
  int arr[m];
  for(i=0;i<m;i++)
  {
      printf("enter elements:");
      scanf("%d",&arr[i]);
  }
  min=arr[0];
  for(i=0;i<m;i++)
  {
      if(min<arr[i])
      {
          min=arr[i];
      }
  }
  printf("%d",min);
  
}