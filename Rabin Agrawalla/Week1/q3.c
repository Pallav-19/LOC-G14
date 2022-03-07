#include<stdio.h>
int main(){
int x,y;
printf("Enter a number\n");
scanf("%d",&x);
y=x%2;
switch (y)
{
case(0):
    printf("The given number is even\n");
    break;

case(1):
printf("The given number is odd\n");
    
}
return 0;
}