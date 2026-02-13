#include<stdio.h>
int main(){
    int num, i;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num<=1){
        printf("Not Prime");
    }
for(i=2; i<num; i++){
   if(num % i==0){
printf("Not Prime");
return 0;
   }
}
printf("Prime Number");
    return 0;
}