#include<stdio.h>
int main(){
int N;

printf("Enter any number: ");
scanf("%d", &N);

if(N > 0){
    printf("%d is a natural number\n",N);
}
else if(N < 0){
    printf("%d is not a natural number\n",N);
}
else{
    printf("Invalid number\n");
}
    return 0;
}