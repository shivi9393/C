#include<stdio.h>
int main()
{
    int arr[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,22,24,25};
    int i,num,countp=0,countn=0,countz=0;
    for(i=0;i<=24;i++)
    {

        if(arr[i]<0)
        {
        countn++;
        }
        
    
    else if(arr[i]==0){
    countz++;       
 
 }
        else if(arr[i]>0){
            countp++;

        }
    }
        printf("count positive %d",countp);
        printf("count negative %d/n",countn);
        printf("/ncount zero %d",countz);

    return 0;
}