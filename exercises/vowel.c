#include<stdio.h>

int main(int argc, char const *argv[])
{
    char x;
    int vco=0,cco=0;
    printf("enter character: ");
    scanf("%c",&x);


    for char in x{
        if(x=="a","e","i","o","u"){
            vco=+1;

        }
        else{
            cco=+1;
        }
    }    
    printf("no vowels:%d",vco);

    return 0;
}
