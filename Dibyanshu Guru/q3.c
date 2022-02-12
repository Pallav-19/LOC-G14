#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter any number to check even or odd:");
    scanf("%d",&num);
    switch(num % 2)
    {
        case 0:
        printf("Number is even");
        break;

        case 1:
        printf("Number is odd");
        break;
    }
    return 0;
}