 #include<stdio.h>
 
    //merging the array....
    
   void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[high-low+5];
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
 
   void mergeSort(int A[],int low,int high)
   {   
      int mid;
      if(low<high)
      {
        mid=(low+high)/2;
        mergeSort(A,low,high);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
      }
   }
   
   int binary_search(int A[],int low,int high,int key)
   {   
       if(high<low)
       return -1;
       int mid=(low+high)/2;
       
       if(A[mid]==key)
       {
         return mid;
       }
       if(A[mid]<key)
       {
         low=mid+1;
         return binary_search(A,low,high,key);
       }
       else{
         high=mid-1;
         return binary_search(A,low,high,key);
       }
   }
   

   
   
   int main()
   {
    int t,index;
    scanf("%d",&t);
    while(t--)
    {
      int n;
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
       int k;
       scanf("%d",&k);
        int x=a[k-1];
    //first sort the arrray a using the merge sort.
    
       mergeSort(a,0,n-1);
       
       //search the k using binary search....
        index=binary_search(a,0,n-1,x);
       printf("%d\n",index+1);
    
  }
  }