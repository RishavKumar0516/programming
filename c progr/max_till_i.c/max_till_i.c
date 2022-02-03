#include<stdio.h>

int maximum(int a,int b){
    return (a>b)? a:b;
}

int minimum(int a,int b){
  return (a<b)? a:b;  
}

int main(){
    int max=-1999987;
    int min=1999987;
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",A+i);
    }
    for(int i=0;i<n;i++){
        max=maximum(max,A[i]);
        min=minimum(min,A[i]);
    }
    printf("%d\n",max);
    printf("%d\n",min);
}