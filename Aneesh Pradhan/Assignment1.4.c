
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("1. Addition \n");
    printf("2. Substration \n");
    printf("3. Multiplication \n");
    printf("4. division \n");
    printf("Enter any two numbers: \n");
    scanf("%d %d",&a ,&b);
    printf("Enter your choice:");
    scanf("%d" ,&c);
    switch(c)
    {
    case 1:
    printf("sum of %d and %d is =%d",a,b,a+b);
    break;
    case 2:
    printf("difference of %d and %d is =%d",a,b,a-b);
    break;
    case 3:
    printf("Multiplication of %d and %d is =%d",a,b,a*b);
    break;
    case 4:
    printf("division of %d and %d is =%d",a,b,a/b);
    break;
    default:
    printf("Enter the correct choice");
    break;
    }
return 0;
}