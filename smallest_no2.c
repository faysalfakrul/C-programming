#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d \n", x >= '0' && x <= '9');
    return 0;
}