#include<stdio.h>

int sum(int n);

int main(){
printf("Sum is : %d ", sum(5));

    return 0;
}

int sum(int n){
    if(n==1){// base case
        return 1;
    }
int sumNm=sum(n-1);
int sumN=sumNm+n;
return sumN;
}