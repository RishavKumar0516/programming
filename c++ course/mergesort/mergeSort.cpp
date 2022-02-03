#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
void merge(int *arr, int low, int mid, int high){
    int i,j,k;
    i=low;j=mid+1;
    k=low;
    int b[high+1];
    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
            b[k]=arr[j];
            j++;
            k++;
        }
        else if(arr[i]<=arr[j]){
            b[k] = arr[i];
            k++;
            i++;
        }
    }
    while(i<=mid){
        b[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k]=arr[j];
        k++;
        j++;
    }
    for(int i=0;i<=high;i++){
        arr[i]=b[k];
    }
}

void mergeSort(int *arr, int low, int high){
     if(low < high){
         int mid = (low + high)/2;
         mergeSort(arr,low,mid);
         mergeSort(arr,mid+1,high);
         merge(arr,low,mid,high);
     }
}

 void print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
 
int main()
{
    int arr[]={56,47,28,95,32,55,40,5};
    int n=8;
    mergeSort(arr,0,7);
    print(arr, n);
    return 0;
}