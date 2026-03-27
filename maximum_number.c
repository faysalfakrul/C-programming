#include<stdio.h>

void maxNum(int *a,int *b);

int main(){
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d", &b);
maxNum(&a,&b);
    return 0;
}

void maxNum(int *a,int *b){
    if(*a>*b){
        printf("maximum number is: %d", *a);
    }
    else{
        printf("maximum number is: %d", *b);
    }
}