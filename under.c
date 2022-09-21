#include <stdio.h>
int main(){

 int n;
 printf("enter the number");
 scanf("%d", &n);
 
 int i;
 int sum =0;
 
   for(i=1;i<n;i++){
    
       if(n%i ==0){
       
       sum = sum+i;
       }
       }
        if(sum == n){
        printf(" yes");
        }
        else{
        printf("no");
        }
        
        
        



return 0;
}
