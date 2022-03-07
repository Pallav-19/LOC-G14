/* Write a C program to display your basic information like name, regd no. (only last 3
 digits), branch and your hobbies.
 (In this question, you’ll learn how to take an input and display a string and an integer.)*/
#include<stdio.h>
#include<string.h>

int main()
{
    char name[39],branch[30],hobbies[100];
    int reg;
    printf("Enter your name : ");
    gets(name);
    printf("Enter your Reg. No.(last three digits) : ");
    scanf("%d",&reg);
    getchar();
    printf("Enter your branch : ");
    gets(branch);
    printf("Enter your hobbies : ");
    gets(hobbies);
    printf("\n");
    printf("Student's Info\n");
    printf("Name : %s\n",name);
    printf("Regd No. : %d\n",reg);
    printf("Branch : %s\n",branch);
    printf("Hobbies : %s\n",hobbies);
    return 0;
}