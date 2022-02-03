#include<stdio.h>

int maximum(int arr[],int size){
    int max=-199978;
    for(int x=0;x<size;x++){
        if(arr[x]>max){
            max=arr[x];
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
      scanf("%d",A+i);
    }
    int size=maximum(A,n);
    int count[size];
    for(int i=0;i<size;i++){
    count[i]=-1;
    }
    int min_index=199978;
    for(int i=0;i<n;i++){
        int ptr=A[i];
        if(count[ptr]==-1){
        count[ptr]=i;
        }
        else{
           if(count[ptr]<min_index){
               min_index=count[ptr];
           }
        }
       
    }
     if(min_index==199978){
            printf("-1");
        }else{
            printf("%d",min_index);
        }
}