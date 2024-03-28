#include<stdio.h>
int main()
{
    int n1,n2,s,m,opt,d,sub;
    printf("enter 1st no:");
    scanf("%d",&n1);
    printf("enter 2nd no:");
    scanf("%d",&n2);
  printf("\nselect your choise: ");
  printf("\n(1) for sum ");
  printf("\n(2) for sub ");
  printf("\n(3) for mul ");
  printf("\n(4) for div ");
  printf("\n(5) to Break ");
  printf("\nenter your selected choise: ");
  scanf("%d",&opt);
  switch(opt){
    case 1:
    {printf("\nsum of %d & %d is: %d",n1 ,n2 ,n1+n2 )  ; 
    break; }
  
   
   
    case 2:
    //{if (n1>n2)
    {
        printf("\ndiff of %d & %d is: %d",n1 ,n2 ,n1-n2 );
        break;
        }
    //  else if(n2>n1)
    //  {
    //     printf("\ndiff of %d & %d is: %d",n1 ,n2 ,n2-n1 );
    //     }
    //  else{
    //     printf("\nboth are equal diff is 0");
    //     }   
    //}
    case 3:
    {
        printf("\nmul of %d & %d is: %d",n1 ,n2 ,n1*n2 ) ;  
         break;}
    case 4:
     {
         printf("\ndiv of %d & %d is: %d",n1 ,n2 ,n1/n2 ); 
            break;}
    case 5:
  {
    break;
  }
  }


    
}
