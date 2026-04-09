#include<stdio.h>

int main(){
int arr[6]={8,4,9,6,3,10};
int i,largest;
largest=arr[0];
for(i=0; i<6; i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
printf("The largest number is: %d",largest);
return 0;    
}