#include<stdio.h>

int main()
{
    int a;
    printf("Enter any number: \n");
    scanf("%d", &a);
    switch(a%2==0)
    {
    case 1:
    printf("a is even");
    break;
    default:
    printf("a is odd");
    break;
    }   
return 0;
}