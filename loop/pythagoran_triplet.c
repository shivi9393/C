#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    float c;

    for(a=1;a<=30;a++){
        for(b=1;b<=30;b++){
            c=sqrt(pow(a,2)+pow(b,2));
            
            if(c==(int)(c)){
                printf("a:%d b=%d c=%.0f \n",a,b,c);
            }
        }
    }
    return 0;
}