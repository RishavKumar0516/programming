#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0;;
    int* ptr;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
       scanf("%d",ptr+i);
       sum=sum+*(ptr+i);
    }
    printf("%d",sum);
    free(ptr);
}