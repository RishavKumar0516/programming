#include<stdio.h>

int printnum(int n){

    if(n!=1){
      printf("%d",n); 
      return printnum(n-1);
      
    }
    return n;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int k=printnum(n);
    printf("%d",k);
}