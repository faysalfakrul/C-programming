#include<stdio.h>

int main(){
int arr[6]={8,4,9,6,4,4};
int x=4;
int i,count=0;

for(i=0; i<6; i++){
    if(arr[i]==x){
        count++;
    }
}
printf("Number %d occur %d time: ", x,count);
return 0;    
}