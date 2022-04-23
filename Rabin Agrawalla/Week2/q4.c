#include <stdio.h>
int main()
{
    int a = 0, b = 1, nt = 0, n;
    printf("Enter the number upto which you want series:");
    scanf("%d", &n);
    printf("%d %d", a, b);

    for (int i = 1; i <= n - 2; i++)
    {
        nt = a + b;
        printf(" %d", nt);
        a = b;
        b = nt;
    }
    return 0;
}