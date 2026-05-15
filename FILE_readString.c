#include<stdio.h>

int main(){
    FILE *fptr;
    char str[100];
fptr=fopen("Student.txt","r");

if(fptr==NULL){
    printf("file cannot be opened\n");
    return 1;
}
fgets(str,100,fptr);
printf("String from file:%s",str);
fclose(fptr);
    return 0;
}