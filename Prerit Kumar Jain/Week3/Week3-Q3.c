#include <stdio.h>

void check(int *n)
{
    if (*n % 2 == 0)
        printf("The number is EVEN");
    else
        printf("The number is ODD");
}

int main()
{
    int n;
    printf("Enter a positive no. : ");
    scanf("%d", &n);
    if (n > 0)
        check(&n);
    else
    {
        printf("You entered negative number\n");
        main();
    }
    return 0;
}