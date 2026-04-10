//Insert Element at the end.
#include<stdio.h>

int main(){
int arr[100],n,element;

printf("Enter number of element in array: ");
scanf("%d",&n);

printf("Enter element: \n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Enter element to insert at the end: \n");
scanf("%d",&element);

arr[n]=element;
n++;

printf("Array after inserting element: \n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}