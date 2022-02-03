#include<stdio.h>

// -----****************----merge cort-------********************//

int merge(int A[],int low,int mid,int high)
{
    int i,j,k;
    i=k=low;
    j=mid+1;
    int B[high-low+5];
    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
           B[k]=A[i];
           i++;
           k++;
        }
        else{
           B[k]=A[j];
           k++;
           j++;
        }
    }
    while(i<=mid){
        B[k]=A[i];
        k++,i++;
    }
    while(j<=high){
        B[k]=A[j];
        j++,k++;
    }
    for(int i=0;i<=high;i++){
        A[i]=B[i];
    }

}


int mergeSort(int A[],int low,int high)     
{
    int mid;
     mid=(low+high)/2;
    if(low<high)
    {
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}



int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
         for(int i=0;i<=n-1;i++){
        printf("%d \n",arr[i]);       
    }
    printf("\n");

         
    mergeSort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
        printf("%d \n",arr[i]);       
    }

}