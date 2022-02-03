#include<iostream>
#include<climits>
using namespace std;

void merge(int* arr, int low, int mid, int high){
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int A[100];
    while(i <= mid && i <= high){
        if(arr[i] < arr[j]){
            A[k] = arr[i];
            k++;
            i++;
        }
        else{
                A[k] = arr[j];
                j++;
                k++;
        }
    }
    while(i <= mid){
        A[k] = arr[i];
        k++;
        i++;
    }
    while(j <= high){
        A[k] = arr[j];
        k++;
        j++;
    }
    for(int i=low;i<= high;i++){
        arr[i] = A[i];
    }
}

void mergeSort(int* arr, int  low, int high){
    
    int mid;
    if(low < high){
        mid = (high + low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }

}

int minimum(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}


int maximum(int a, int b){
    if(a < b){
        return b;
    }else{
        return a;
    }
}


 void printArray(int* arr, int n){
     for(int i =0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }



 int minimize(int* arr, int n, int k){
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    int max, min;
    int smallest = arr[0];
    int  largest = arr[n-1];
    int ans = arr[n-1] - arr[0];

    for(int i=1;i<n;i++){
        min = minimum(arr[i]-k,arr[0]+k);
        max = maximum(arr[i-1]+k, arr[n-1]-k);
        // if(min < 0)
        // continue;
        ans = minimum(ans, max - min);
    }
            return ans;
 }

int main(){

 int arr[10] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
 int n = 10, k = 5;
 int height = minimize(arr, n, k);
 cout<<height<<endl;
return 0;
}