#include<stdio.h>
int main(){
int num, original;
int d1,d2,d3,sum;
printf("enter a 3 digit number: ");
scanf("%d", &num);

original = num;
d1 = num % 10;
d2 = (num / 10) % 10;
d3 = num / 100;

sum = d1*d1*d1+d2*d2*d2+d3*d3*d3;

if(sum == original){
    printf("%d is an armstrong number.\n");
}
else{
    printf("%d is not an armstrong number.\n");
}
    return 0;
}