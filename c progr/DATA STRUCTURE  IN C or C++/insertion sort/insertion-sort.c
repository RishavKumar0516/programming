#include<stdio.h>
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertionSort(int A[],int n){
    int key,j;
    for(int i=0;i<=n-1;i++){
        printf("working on pass number %d \n",i);
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;

        }
        A[j+1]=key;
        printArray(A,n);
    }
}
int main(){
    int A[]={12,54,65,7,23,9};
    //int A[]={2,4,6,7,12,14};
    int n=6;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    }