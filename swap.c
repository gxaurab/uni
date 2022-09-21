#include <stdio.h>
int swap(int,int);
int main(){

 int a,b;
 printf("Enter any two numbers to swap:\n");
 scanf("%d %d",&a ,&b);

 int temp;
 temp = a;
 a= b;
  b=temp;
  printf(" \n After the swap it is %d %d\n",a,b);
 
 return 0;
}


