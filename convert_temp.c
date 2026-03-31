#include<stdio.h>

float convertTemp(float celsius);

int main(){
float far=convertTemp(52);
printf("Far is : %f", far);
    return 0;
}

float convertTemp(float celsius){
    float far=celsius*(9/3)+32;
    return far;
}