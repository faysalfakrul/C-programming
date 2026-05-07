#include<stdio.h>
#include<string.h>
void removeBlankspace(char str []);

int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    removeBlankspace(str);
    puts(str);
    return 0;
}

void removeBlankspace(char str[]){
    int j=0;
    for(int i=0; str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
}