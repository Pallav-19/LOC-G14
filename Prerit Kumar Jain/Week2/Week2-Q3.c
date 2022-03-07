#include <stdio.h>
#include <string.h>

int main()
{
    char num[20],swap;
    int n;
    printf("Enter the number : ");
    scanf("%s", &num);
    n=strlen(num);
    swap=num[n-1];
    num[n-1]=num[0];
    num[0]=swap;
    printf("%s",num);
    return 0;
}