#include<stdio.h>
int main()
{
	float radius,area,circumference,diameter;
		printf("\n Please enter the radius of the circle:");
		scanf("%f",&radius);
		diameter=2*radius;
		circumference=2*3.14*radius;
		area=3.14*radius*radius;
	printf("\n Diameter of a circle=%2f\n",diameter);
	printf("\n Circumference of a circle=%2f\n",circumference);
	printf("\n Area of a circle=%2f\n",area);
	return 0;
}