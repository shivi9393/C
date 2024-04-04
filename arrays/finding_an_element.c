#include<stdio.h>
int main()
{
    int arr[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,22,24,25};
    int i,num,count=0;
    printf("enter number you want to find: ");
    scanf("%d",&num);
    for(i=0;i<=24;i++)
    {

        if(num==arr[i])
        {
        count++;
        printf("%d is found at location %d\n",num,i+1);\
        }
        
    }
    if(count==0){
            printf("number not found");
        }
        else{
        printf("element occured %d times in array",count);
        }
    
    return 0;
}