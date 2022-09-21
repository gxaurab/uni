#include <stdio.h>
int factorial(int a);
int main(){
   int n;
   printf("enter the number you want:\n");
   scanf("%d", &n);
   
   int result = factorial(n);
   printf("factorial is %d/n",result);
   return 0;
   }
    int factorial(int a){
    if(a==0){
    return 1;
    }
    else {
   return a*factorial(a-1);


}
    }
