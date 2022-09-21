#include <stdio.h>

int main(){

int n;
printf("enter the numbert");
scanf("%d",&n);

int i,sum=0;
for(i=1;i<n;i++){
  if(n%i ==0){
  sum = sum +i;
}
if(sum ==n){
printf("the num is perfet");
 }
else{
printf("no");
}
}
return 0;
}
