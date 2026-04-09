#include<stdio.h>

int main(){
char ch = 'A';
char *ptr=&ch;

while(*ptr<='z'){
    printf("%c",*ptr);
    (*ptr)++;
}
    return 0;
}