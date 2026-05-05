#include<stdio.h>
#include<string.h>

void highestFreqncy(char str[]);

int main(){
char str[100];

printf("Enter any string: ");
fgets(str,100,stdin);
 highestFreqncy(str);
    return 0;
}

void highestFreqncy(char str[]){
    int freq[256]={0};
    int max=0;
    char maxChar;
    //count frequency
       for (int i = 0; str[i] != '\0'; i++) {
           freq[(int)str[i]]++;
        }
    // count the highest
    for(int i=0; i<256; i++){
        if(freq[i] > max && i !='\n'){
            max=freq[i];
            maxChar=i;
        }
    }
 printf("highest frequency char: %c\n", maxChar);
 printf("highest frequency: %d\n", max);
}