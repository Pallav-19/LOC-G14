#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a number : ");
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