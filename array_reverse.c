#include<stdio.h>

int main(){
    int arr[5]={22,33,44,55,66};
    int i;

    printf("Array elements in reverse order : \n");

    for(i=4; i>=0; i--){
        printf("%d",arr[i]);
    }
    return 0;
}