#include<stdio.h>
int main(){
    int i, j, start, end, prime;
    printf("enter start number: ");
    scanf("%d", &start);
    printf("enter end number: ");
    scanf("%d", &end);

        for(i=start; i<=end; i++){

             if(i>1){
                prime = 0;
                for(j=2; j<i; j++){
                     if(i%j == 0){
                     prime++;
                     }
                }   
                if(prime == 0){
                    printf("%d\n", i);
                }
             }
        }
    return 0;
}
