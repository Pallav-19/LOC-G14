#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
int n=1;
switch (n)
{
case 1:
    printf("sum is %d\n",a+b);
case 2:
    printf("substrction is %d\n",a-b);
case 3:
    printf("multiplication is %d\n",a*b);
case 4:
    printf("division is %f\n",a/b);        
}
return 0;
}