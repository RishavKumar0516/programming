#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here


 void invention(){

     int n,p,k;
     int i,ans=0;
     scanf("%d %d %d",&n,&p,&k);
     int x = p%k;
    //  printf("the value of x is %d\n",x);
     int y = ((n-1)-((n-1)/k)*k);
    //  printf("the value of y is %d\n",y);
     if(x>y){
         ans= (((n-1)/k)+1)*(y+1)+(x-1-y)*((n-1)/k);
     }
     else{
         ans= (((n-1)/k)+1)*x;
     }
    //  printf(" the ans is %d\n",ans);
     for(i=x; i<=n-1;i=i+k){
         ans=ans+1;

         if(i==p){
             printf("%d\n",ans);
             break;
         }
     }                                                                                                  


 }
 
int main()
{
 
  int t;
  scanf("%d",&t);
  while(t--){
      invention();
  }
 
 
return 0;
}