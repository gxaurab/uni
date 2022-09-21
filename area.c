
#include <stdio.h>
#define PI 3.14
#include <math.h>
float getch(float r){

    float Area;
    Area = 2*PI*r+ PI* r*r;
    
    return Area;
       




}
float main(){
 
 float r,X;
 printf("enter the radius\n");
 
 scanf("%f",&r);
 X =getch(r);
 printf("the required areea is %f", X);
 
 
 
 return 0;
 }

