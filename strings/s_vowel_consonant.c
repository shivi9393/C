#include<stdio.h>
int main()
{
    char s[500],r;
    int c=0,v=0,sp=0,i;
    puts("enter a string: ");
    fgets(s,sizeof(s),stdin);
   
    for (i=0;s[i]!=0;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            v++;
        }
        else if(s[i]==' '){
            sp++;
        }
        else{
            c++;
        }

    }
    printf("a vowel appeared %d times \n",v);
    printf("a consonant appeared %d times \n ",c-1);
    printf("a blank space appeared %d times \n ",sp);
    return 0;
}