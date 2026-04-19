#include<stdio.h>

int main(){
int x;
printf("Enter any number: \n");
scanf("%d",&x);

/*if(x>=1){
    printf("Natural number\n");
}
else{
    printf("Not natural number");
}*/
x>=1?printf("Natural number"):printf("Not natural number");
    return 0;
}