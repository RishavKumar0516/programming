#include<stdio.h>
int main(){
    long int t;
    long int a,b,A,B;
    scanf("%d",&t);
    while(t>0){
        
        scanf("%ld %ld %ld %ld",&a,&b,&A,&B);
         A=A/a;
         B=B/b;
        printf("%d",(A+B));  
        t--;    
    }
}