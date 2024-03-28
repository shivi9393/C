#include<stdio.h>
int main()
{
    int r,g,b,a,w,cayan,ma ,k,yell;
    printf("enter red: ");
    scanf("%d",&r);
    printf("enter blue: ");
    scanf("%d",&b);
    printf("enter green: ");
    scanf("%d",&g);
    r=r/255;
    g=g/255;
    b=b/255;
 if((r>=g)&&(r>=b)){
    w=r;
 }
 else if((g>=r)&&(g>=b)){
    w=r;
 }
 else if((b>=r)&&(b>=g)){
    w=r;
 }
 cayan=(w-r)/w;
 ma=(w-g)/w;
 yell=(w-b)/w;
k=1-w;
printf("CMYK:  %d  %d  %d  %d",cayan,ma,yell,k);
if(r==0 && g==0 && b==0){
        k==1;
printf("CMYK:  %d  %d  %d  %d",cayan,ma,yell,k);

      
      }


    return 0;
}
