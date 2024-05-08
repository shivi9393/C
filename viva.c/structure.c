// #include<stdio.h>
// struct student {
//     int rollno[4];
//     int yr_join[4];
//     char dept[4];
//     char name[4];
//     char course[4];
// };
// void student_yoj(int year){
//     int i;
//     for(i=0;i<=2;i++){
//     printf("enter year of joining: ");
//     scanf("%d",&year);
// }}
// int main()
// {
//     struct student s[4];
//     int i;
//     printf("enter name,roll no, course,dept,year of joining :");
//     for(i=0;i<=2;i++){
//         scanf("%s",&s[i].name);
//         scanf("%d ",&s[i].rollno);
//         scanf("%s ",&s[i].course);
//         scanf(" %s ",&s[i].dept);
//         scanf("%d",&s[i].yr_join);
//     }   
// }
#include <stdio.h>
struct student {
    char name[40];
    int age;
    char branch[20];
    };
struct student getinfo(struct student );

int main() {
    // Write C code here
    struct student s3,s4;
    s4=getinfo(s3);
    
    printf("\nThe name : %s",s4.name);
    printf("\nage : %d",s4.age);
    printf("\nbranch: %s",s4.branch);
    return 0;
}
struct student getinfo(struct student s2)
{ 
    printf("Enter name:");
    scanf("%[^\n]s",s2.name);
    printf("Enter branch:");
    scanf("%s",s2.branch);
    printf("\nEnter age:");
    scanf("%d",&s2.age);
    return s2;
}