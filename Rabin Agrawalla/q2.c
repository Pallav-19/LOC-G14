#include<stdio.h>
int main(){
int a,b;
printf("ENTER TWO NUMBERS:\n");
scanf("%d %d",&a,&b);
if(a>b){
    printf("a is greater than b\n");
}
else{
    printf("b is greater than a\n");
}
return 0;
}