#include<stdio.h>

void printArray(int* arr,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

void bubblesortAdpative(int A[],int n){
    int isSorted=0;
    for(int i=0;i<n-1;i++){
        printf("working on pass number %d\n",i);
        isSorted=1;
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }

        }
        if(isSorted){
            return;
        }
    }
}


int main(){
  //int A[]={1,2,3,4,5,999,547,117,312,95};
  int A[]={1,2,3,4,5,6,7,8,9,10};
  int n=10;
  printArray(A,n);
  bubblesortAdpative(A,n);
  printArray(A,n);

}