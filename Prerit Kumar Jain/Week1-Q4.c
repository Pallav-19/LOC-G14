#include<stdio.h>

int main()
{
    int a,b,n;
    printf("Enter the value of 'a' : ");
    scanf("%d",&a);
    printf("Enter the value of 'b' : ");
    scanf("%d",&b);
    switch (0)
    {
    case 0:
    printf("The Summation of a & b is : %d\n",a+b);
    case 1:
    printf("The Substraction of a and b is : %d\n",a-b);
    case 2:
    printf("The Multiplication of a and b is : %d\n",a*b);
    case 3: 
    printf("The division of a and b is : %d\n",a/b);
    case 4:
    printf("In division of a and b the reminder is : %d\n",a%b);
    }
    return 0;
}