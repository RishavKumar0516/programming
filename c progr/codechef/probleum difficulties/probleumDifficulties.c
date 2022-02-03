#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here


 /* merge sort for sorting the array */

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

// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

 void probleum(){

     int A[4];
     for(int i=0;i<4;i++){
         scanf("%d",&A[i]);
     }

         /* else sorting the array */
          mergeSort(A, 0, 3);
            //   printArray(A, 4);

     if(A[0]==A[1] && A[1]==A[2] && A[2]==A[3]){
         printf("0\n");
     }

     else if( (A[0]==A[1] && A[1]==A[2]) || (A[1]==A[2] && A[2]==A[3]) ){
         printf("1\n");
     }
     else{
         printf("2\n");
     }

 }
 
int main()
{
 
int t;
scanf("%d",&t);
while(t--){
    probleum();
} 
 
return 0;
}