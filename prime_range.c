#include<stdio.h>
int main(){
    int i, j, start, end;
    printf("enter start number: ");
    scanf("%d", &start);
    printf("enter end number: ");
    scanf("%d", &end);

        for(i=start; i<=end; i++){

             if(i<=1)
                continue;
             for(j=2; j*j<=i; j++){
                     if(i%j == 0)
                     break; 
                }   
                if(j*j > i){
                    printf("%d\n", i);
                } 
        }
    return 0;
}
