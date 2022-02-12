#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number to check odd or even:");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0:
			printf("%d  the number is even.\n",num);
			break;
		case 1:
			printf("%d the number is odd,\n",num);
			break;
	}
}