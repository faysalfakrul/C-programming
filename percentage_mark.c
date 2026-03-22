#include<stdio.h>

int calcPercentage(int Math, int Science, int Bangla);

int main(){
int Math=99;
int Science=95;
int Bangla=90;
printf("Percentage is : %d",calcPercentage( Math, Science, Bangla));
    return 0;
}

int calcPercentage(int Math, int Science, int Bangla){
    return (Math+Science+Bangla)/3;
}
