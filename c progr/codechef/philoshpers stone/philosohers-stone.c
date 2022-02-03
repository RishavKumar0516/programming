#include<stdio.h>

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[1000];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)   
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        mergeSort(arr, 0, n-1);


        int check=0;
      for(int j=0;j<n-1;j++){
          if(arr[j]==arr[j+1]){
          check=1;
          break;
          }
      }
      if(check==1){
          printf("yes\n");

      }
      else{
          printf("no\n");
      }
    }
}