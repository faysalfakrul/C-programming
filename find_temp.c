#include<stdio.h>

void findTemp(float t);

int main(){
    float t;
printf("Enter any temperature: ");
scanf("%f", &t);
findTemp(t);
    return 0;
}

void findTemp(float t){
if ( t>25){
    printf("Hot");
}
else{
    printf("Cold");
}
}