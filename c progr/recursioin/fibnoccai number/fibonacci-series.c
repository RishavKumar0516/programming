#include<stdio.h>

//recursive function......
 
 int fibonnaci_series(n){
     if(n<=1)
     return n;
     return fibonnaci_series(n-1)+fibonnaci_series(n-2);
 }

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibonnaci_series(n));

} 