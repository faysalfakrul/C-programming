#include<stdio.h>
int main(){
    int i, j, start, end, count;
    printf("enter start number: ");
    scanf("%d", &start);
    printf("enter end number: ");
    scanf("%d", &end);

        for(i=start; i<=end; i++){

             if(i>1){
                count = 0;
                for(j=2; j<i; j++){
                     if(i%j == 0){
                     count++;
                     }
                }   
                if(count == 0){
                    printf("%d\n", i);
                }
             }
        }
    return 0;
}
