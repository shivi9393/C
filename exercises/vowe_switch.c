#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch,av;
    printf("enter a ALPHABET: ");
    scanf("%c",&ch);
    switch(ch){
        case 'a' :{printf("a is VOWEL");break;}
        case 'e' :{printf("e is VOWEL");break;}
        case 'i' :{printf("i is VOWEL");break;}
        case 'o' :{printf("o is VOWEL");break;}
        case 'u' :{printf("u is VOWEL");break;}
        case 'A' :{printf("A is VOWEL");break;}
        case 'E' :{printf("E is VOWEL");break;}
        case 'I' :{printf("I is VOWEL");break;}
        case 'O' :{printf("O is VOWEL");break;}
        case 'U' :{printf("U is VOWEL");break;}
        default:
         av=ch;
     printf("ascii value %c : %d \n ", ch,av );
     if (av>=65 && av <=90){
        printf(" %c is a capital  ");
          }
 else if (av>=97 && av <=122 ){
    printf(" %c is small ");
 }
 else if(av>=48 && av<=57){
   printf("%c is number");

 }
 else if (( av >=0&&av<=47)||(av>=58 && av>=64)||(av>=91&&av<=96)||(av>=123&&av<=127)){
   printf("%c special character");
 }

     
    }
    return 0;
}
