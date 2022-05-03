#include<stdio.h>
int largest(int x[],int n);
int main(){
int a[5],i;
for (i=0;i<5;i++){
    printf("Enter element %d : ",i);
    scanf("%d",&a[i]);
}
printf("Largest number of the array is %d.",largest(a,5));


return 0;
}

int largest(int x[],int n){
    int largest=0;
    for(int i=0;i<n;i++){
        if (x[i]>largest){
            largest=x[i];
        }
    }
    return largest;
}