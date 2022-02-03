#include<stdio.h>
int main(){
    int n;
   scanf("%d",&n);
   int k=n-1;
    for(int i=1;i<=2*n-1;i++){
        
        for(int j=1;j<=2*n-1;j++){
           if(i==1||i==2*n-1){
               printf("%d",n);
               printf(" ");
           }

           else if(j==1||j==2*n-1){
               printf("%d",n);
               printf(" ");
           }
           else{
               printf("%d",k);
               printf(" ");
           }
        }
        printf("\n");
    
    }

}