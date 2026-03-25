#include<stdio.h>

int powerFunct(int x, int y);

int main(){
    int x,y;
printf("Enter the base:");
scanf("%d", &x);
printf("Enter the power: ");
scanf("%d", &y);

printf("The answer is: %d", powerFunct(x,y));
    return 0;
}

int powerFunct(int x,int y){
if (y==0){
    return 1;
}
else{
    return x*powerFunct(x,y-1);
}

}
