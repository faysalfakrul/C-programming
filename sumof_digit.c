#include<stdio.h>

int sumofDigit(int n);

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Sum of digits: %d", sumofDigit(num));
    return 0;
}

int sumofDigit(int n){
if (n==0){
    return 0;
}
return (n%10) + sumofDigit(n/10);
}