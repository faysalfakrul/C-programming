#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);
int main() {
float a=5;
float b=3;
float radius=3;
float side=4;
printf(" Area is : %f", rectangleArea(a,b) );
printf(" Area is : %f", circleArea(radius) );
printf(" Area is : %f", squareArea(side) );
    return 0;
}

float squareArea(float side){
    return side*side;
}

float circleArea(float radius){
    return 3.14*radius*radius;
}
float rectangleArea(float a, float b){
    return a*b;
}
