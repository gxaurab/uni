#include <stdio.h>
int prime(int );
int main(){
     int n;
     printf("enter");
     scanf("%d",&n);
     int result;
     result = prime(n);
    return 0;
}
int prime(int a){
    int i, count=0;
   for(i=1;i<=a;i++){
       if(a%i==0){
       count ++;
       }
   }
   if(count ==2){
       printf("the number is prime");
   }
   else {
        printf("the number is not prime");
   }
    }