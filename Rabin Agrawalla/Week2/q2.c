#include <stdio.h>
int main()
{
    int num[10], sume = 0, sumo = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %dth element:", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            sume += num[i];
        }
        else
        {
            sumo += num[i];
        }
    }
    printf("The sum of even number is %d\n", sume);
    printf("The sum of odd number is %d\n", sumo);

    return 0;
}