#include<stdio.h>
#include<stdlib.h>
void reverse_array(int arr[],int size){
    int start=0,temp;
    int end=size-1;
    while(start<=end){
       temp=arr[end];
       arr[end]=arr[start];
       arr[start]=temp;
       start++;
       end--;
    }
    for(int i=0;i<size;i++){
        printf("%d",*(arr+i));
    }
}
int main(){
    int* ptr;
    int n;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    reverse_array(ptr,n); 
    free(ptr);
}