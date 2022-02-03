#include<stdio.h>

void printArray(int* a,int n){
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
}

void BubbleSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


int main(){
    int arr[]={56,47,28,95,32,55,40,5};
    int n=8;
    printArray(arr,n);
    BubbleSort(arr,n);
    printArray(arr,n);
}