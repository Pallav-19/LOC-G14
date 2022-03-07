/* Write a C program to enter the radius of a circle and find its diameter, circumference
 and area.*/
#include<stdio.h>

int main()
{
    float r,c,d,a;
    printf("Enter the radius of Circle : ");
    scanf("%f",&r);
    d=r*2;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("The radius of Circle : %f\n",r);
    printf("The Diameter of Circle is : %f\n",d);
    printf("The Circumference of Circle is : %f\n",c);
    printf("The Area of Circle is : %f\n",a);
    return 0;
}