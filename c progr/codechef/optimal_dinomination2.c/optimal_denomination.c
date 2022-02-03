#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here


/*
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
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
*/


 int findgcd(int a, int b){
     int temp =0;
   if(a<b){
       temp = a;
       a = b;
       b = temp;
   }

   while(b != 0){
      temp = a%b;
      a = b;
      b = temp;
   }
   return a;
 }

 void denomination(){
     int n;
     scanf("%d",&n);
     int A[n];

     for(int i=0;i<n;i++){
         scanf("%d",&A[i]);
     }
      if(n==1){
          printf("1\n");
      }
      else{
    // mergeSort(A,0,n-1);
    /* for(int i=0;i<n;i++){
         printf("%d\n",A[i]);
     }*/
     int frd[n]; //tracking the forwarg gcd of array.

     frd[0] = A[0];
     for(int i=1;i<n;i++){
         frd[i] = findgcd(A[i],frd[i-1]);
     }

     int bkd[n]; //tracking the backward gcd of array.
     bkd[n-1] = A[n-1];
     for(int i=n-2;i>=0;i--){
         bkd[i] = findgcd( bkd[i+1], A[i]);
     }

     int h[n];
     h[0] = bkd[1];
     h[n-1] = frd[n-2];
     for(int i=1;i<n-1;i++){
         h[i] = findgcd( frd[i-1], bkd[i+1]);
     }
      int sumall = 0;
      for(int i=0;i<n;i++){
          sumall+=A[i];
      }
     
      long int min = INT_MAX;
      long int sum=0;
      for(int i=0;i<n;i++){
          sum = ((sumall-A[i])/h[i])+1;
          if(sum < min){
              min = sum;
          }
      }
      printf("%ld\n",min);
      }
      
 }
 
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
   denomination();
 }
 
return 0;
}