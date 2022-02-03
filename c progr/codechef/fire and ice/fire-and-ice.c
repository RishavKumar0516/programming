#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d",&n,&m);
        int i=1,j=1,sum=0,value=0;
        while(i<=n){
            if((i%2!=0) && (j%2!=0)){
                sum+=(i+j);

                if(sum==n){
                   value++;
                   j++;
                   sum=0;

                 }
                if(j>n){
                   i++;
                   j=1;
                }
            }
            else{
              if(i%2==0)
              i++;
              if(j%2==0)
              j++;
            }

        }
        printf("%d",(2*value));
        t--;
    }
}