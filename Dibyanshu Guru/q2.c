#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter 2 no's:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is maximum: ",a);
    }
    else
        {
            printf("%d is maximum: ",b);
        }
}
