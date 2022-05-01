#include <stdio.h>

int main()
{
    int n, i, num;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values of array :\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter value the %d element : ", i+1);
        scanf("%d", &a[i]);
    }
    num = a[0];
    for (i = 1; i < n; i++)
        if (num <= a[i])
            num = a[i];
    printf("The largest number is : %d", num);
    return 0;
} 