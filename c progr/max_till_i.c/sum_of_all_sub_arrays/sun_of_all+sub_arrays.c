#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
      scanf("%d",A+i);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
             count+=A[j];
             printf("%d\n",count);
        }
    }
}