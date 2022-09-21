#include <stdio.h>
#include <math.h>
float computeTriangleArea(float a, float b,float c);
int main(){

 float a,b,c;
 printf("Enter the values of sides:\n");
 scanf("%f %f %f",&a,&b,&c);
 
 float Area;
 Area =computeTriangleArea(a,b,c);
 
 printf("The area of triangle is :%f",Area);
 
 return 0;
 }
 
 float computeTriangleArea(float a, float b, float c){
 
 float s;
 
 s= (a+b+c)/2;
 scanf("%f",&s);
 
 float Area;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));
   return Area;
   


}
