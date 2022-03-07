#include<stdio.h>

int main()
{
    int a=0,b=1,s=0,i,n;
    printf("Input upto which term you want the Fibonacci Series : ");
    scanf("%d",&n);
    printf("%d, %d, ",a,b);
    for(i=1;i<=n-2;i++)
    {
        s=a+b;
        a=b;
        b=s;
        printf("%d, ",s);
    }
    return 0;
}