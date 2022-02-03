#include<stdio.h>
int main(){
    int n,k,sum=0;
    scanf("%d",&n);

    while(n!=0){
        k=n%10;
        sum+=k;
        n=n/10;
    }
    printf("%d",sum);
    
}