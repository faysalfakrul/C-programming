#include<stdio.h>

void maxNum(int *a,int *b);

int main(){
int a=5;
int b=9;
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