/* Write a program to find maximum between two numbers.
 (In this question, you’ll learn the use of if-else condition.)*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b : ");
    scanf("%d", &b);
    if (a > b)
        printf("a is greater than b");
    else if (a < b)
        printf("b is greater than a");
    else
        printf("a is equal to b");
    return 0;
}