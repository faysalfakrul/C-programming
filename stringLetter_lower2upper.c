#include<stdio.h>
#include<string.h>


int main(){
char str[100];
char vowel[]="aeiou";
printf("enter a string: ");
fgets(str,100,stdin);

 for(int i=0; str[i] != '\0'; i++){
    for(int j=0; vowel[j] !='\0'; j++){
        if(str[i]==vowel[j]){
        str[i]=str[i]-32;
        }
    }   
   
 }
   puts(str);
    return 0;
}