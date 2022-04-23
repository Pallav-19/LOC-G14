#include <stdio.h>

int main()
{
    int arr[10], i, sum_e=0, sum_o=0;
    printf("Enter 10 numbers : \n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter no. %d integer : ", i + 1);
        scanf("%d",&arr[i]);
    }        
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            sum_e += arr[i];
        else
            sum_o += arr[i];
    }
    printf("The sum of even nos. is : %d\n", sum_e);
    printf("The sum of odd nos. is : %d", sum_o);
    return 0;
}