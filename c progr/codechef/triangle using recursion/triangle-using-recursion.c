#include<stdio.h>
int t;//global variable...

  int func(){
      if(t>=1){
      

      int b;
      scanf("%d",&b);
      int temp=b/2;
      printf("%d\n",(temp*(temp-1))/2);
      t--;
      return func();

      }
      return 0;
     

  }

int main(){
   scanf("%d",&t);
   func();
   return 0;
}