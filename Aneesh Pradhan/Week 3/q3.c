#include <stdio.h>
int isEven(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isEven(num))
    {
        printf("%d is even.",num);
    }
    else
    {
        printf("%d is odd.",num);
    }
    return 0;
}