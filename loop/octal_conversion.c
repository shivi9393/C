#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int oct=0,i=0, num=0 ,number;
    printf("enter number: ");
    scanf("%d",&number);
    
while(number!=0){
    num=number%8;
    oct =oct+(num*pow(10,i));
    number=number/8;
    i++;

}
printf("%d",oct);
    return 0;
}
