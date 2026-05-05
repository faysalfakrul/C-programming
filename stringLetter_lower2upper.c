#include<stdio.h>
#include<string.h>

void swapCase(char str[100]);

int main(){
char str[100];
printf("enter a string: ");
fgets(str,100,stdin);
swapCase(str);
   puts(str);
    return 0;
}

void swapCase(char str[100]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){//for convrt uppercase
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){//convrt to lowercase
            str[i]=str[i]+32;  
        }

    }

}