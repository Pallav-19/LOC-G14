#include<stdio.h>
void main()
{
	char op;
	int a,b;
	printf("Enter the operator(+,-,*,/):");
	scanf("%c",&op);
	printf("Enter the value of a and b:");
	scanf("%d %d",&a,&b);
	switch(op)
	{
		case '+':
			printf("sum=%d",a+b);
			break;
		case '-':
			if (a>b)
				printf("Differnce=%d",a-b);
	         else
	         printf("Difference=%d",b-a);
	         break;
	    case '*':
	    	printf("product=%d",a*b);
	    	break;
	    case '/':
	    	printf("quotient=%d",a/b);
	    	break;
			}
}
