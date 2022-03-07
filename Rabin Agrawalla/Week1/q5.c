#include<stdio.h>

int main(){
float c,a,r,d;

printf("Enter the radious of your circle\n");
scanf("%f",&r);
printf("The diameter of the circle is %f\n",2*r);
printf("The circumference of the circle is %f\n",2*3.14*r);
printf("The area of the circle is %f\n",(3.14*r*r));
return 0;
}