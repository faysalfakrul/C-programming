#include<stdio.h>

void printHello();
void printBonjour();

int main(){
printf("enter F for french E for english: ");
char ch;
scanf("%c", &ch);

if ( ch == 'E'){
    printHello();
}
else{ 
    printBonjour();
}
    return 0;
}

void printHello(){
    printf("Hello\n");
}
void printBonjour(){
    printf("Bonjour\n");
}
