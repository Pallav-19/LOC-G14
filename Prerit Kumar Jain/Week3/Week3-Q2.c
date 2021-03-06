/* Write a program in C to check a number is a prime number or not
using recursion. */

#include <stdio.h>

int prime(int num, int i)
{
    if (i != 1)
    {
        if (num % i != 0)
            return prime(num, i - 1);
        else
            return 0;
    }
    else
        return 1;
}

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (prime(num, num / 2) == 1)
        printf("Entered number is prime number");
    else
        printf("Entered number is not prime number");
    return 0;
}