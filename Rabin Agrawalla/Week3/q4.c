#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
printf("Enter two numbers ");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("The new value of a and b is %d %d" ,a,b);
return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
