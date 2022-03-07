#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Input the side of Square : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        if (i == 1 || i == n)
            for (j = 1; j <= n; j++)
                printf("* ");
        else
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n)
            printf("* ");
            else
            printf("  ");
        }
    }
    return 0;
}