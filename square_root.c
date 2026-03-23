#include<stdio.h>
#include<math.h>
double squareRoot(double n);

int main(){
    double n;
printf("Enter any number : ");
scanf("%lf", &n);

printf("Square root is: %lf", squareRoot(n));
    return 0;
}

double squareRoot(double n){
    return sqrt(n);
}