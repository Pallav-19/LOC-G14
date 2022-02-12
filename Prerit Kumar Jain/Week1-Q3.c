/* Write a C program to check whether a number is even or odd using switch case.
 (In this question, you’ll apply the switch case concept.)*/
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a positive number : ");
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 0: 
        printf("The entered number is even");
        break;
        default:
        printf("The entered number is odd");
    }
    return 0;
}