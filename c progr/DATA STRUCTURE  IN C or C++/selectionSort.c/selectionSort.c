#include<stdio.h>

void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void swap(int *a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int indexofmin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[indexofmin]){
                indexofmin=j;
            }
            
        }
        swap(&A[i],&A[indexofmin]);
    }
}

int main(){
 int A[]={12,54,65,7,23,9};
    //int A[]={2,4,6,7,12,14};
    int n=6;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
}