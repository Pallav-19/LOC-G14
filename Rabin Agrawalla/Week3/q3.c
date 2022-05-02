#include<stdio.h>
void EO(int a);
int main(){
    int x;
printf("Enter a number\n");
scanf("%d",&x);
EO(x);
return 0;
}
void EO(int a){
  

    if(a%2==0){
        printf("This is even number");
    }
    else{
        printf("This is odd number");
    }
}