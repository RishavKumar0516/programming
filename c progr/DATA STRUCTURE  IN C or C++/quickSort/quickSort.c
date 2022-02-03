#include<stdio.h>
void printArray(int* arr,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int partation(int A[],int low,int high){
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int tp;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            i--;
        }
        if(i<j){
            tp=A[i];
            A[i]=A[j];
            A[j]=tp;
        }
    }while(i<j);
    tp=A[low];
    A[low]=A[j];
    A[j]=tp;
    return j;
}

void quickSort(int A[],int low,int high){
    int partationindex;
    if(low<high){
        partationindex=partation(A,low,high);
        quickSort(A,low,partationindex-1);
        quickSort(A,partationindex+1,high);
    }
}

int main(){
 int A[]={12,54,65,7,23,9};
    //int A[]={2,4,6,7,12,14};
    int n=6;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
}