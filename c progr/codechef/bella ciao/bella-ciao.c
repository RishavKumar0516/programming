#include<stdio.h>
int main(){
    int t;
    int D,d,P,Q; 
    scanf("%d",&t);
    while(t>0){
      int value=0;
      scanf("%d %d %d %d",&D,&d,&P,&Q);          
      for(int i=d;i<=D;i++){
          value=(P+(i*Q));
      }
      printf("%d\n",value);
      t--;
    }
}