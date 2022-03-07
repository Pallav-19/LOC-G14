#include <stdio.h>
#include <string.h>

int main()
{
    char stng1[50], stng2[50];
    int i;
    printf("Enter 1st string : ");
    gets(stng1);
    printf("Enter 2nd string : ");
    gets(stng2);
    strcat(stng1, stng2);
    printf("Reverse Order is : ");
    for (i = 0; i <= strlen(stng1); i++)
        printf("%c", stng1[strlen(stng1) - i]);
    return 0;
}