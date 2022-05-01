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
        printf("%d is prime number",num);
    else
        printf("%d is not prime number",num);
    return 0;
} 