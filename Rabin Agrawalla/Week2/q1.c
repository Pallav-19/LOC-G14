#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];
    int i;
    printf("Enter the name for s1\n");
    scanf("%s", s1);
    printf("Enter the name for s2\n");
    scanf("%s", s2);
    strcat(s1, s2);
    for (i = 0; i <= strlen(s1); i++)
        printf("%c", s1[strlen(s1) - i]);
    return 0;
}