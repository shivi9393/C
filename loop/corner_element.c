#include<stdio.h>
#define row 3
#define col 3
int main(){
   int sum=0,a[row][col],i,j,n;
   printf("Enter the matrix elements : ");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("sum of matrix is : %d",a[0][0] + a[0][row-1] +a[col-1][0] + a[col-1][row-1] );
   return 0;
}