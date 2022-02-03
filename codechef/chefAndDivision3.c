#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
   
   int sum(int *arr, int size){
      int total =0;
      for(int i=0;i<size;i++){
          total+=arr[i];
      }
      return total;
   }

   int findmax(int *arr, int size){
      int max =INT_MIN;
      int maxindex = 0;
      for(int i=0;i<size;i++){
         if(max < arr[i]){
            max = arr[i];
            maxindex = i;
         }
      }
      return maxindex;
   }

   int findmin(int *arr, int size){
      int min =INT_MAX;
      int minindex = 0;
      for(int i=0;i<size;i++){
         if(min > arr[i]){
            min = arr[i];
            minindex = i;
         }
      }
      return minindex;
   }



void checkArray(){
   int m,n,count=0;
   scanf("%d %d",&n,&m);
   int A[n];
   int B[m];
   for(int i=0;i<n;i++){
       scanf("%d",&A[i]);
   }
   for(int i=0;i<m;i++){
       scanf("%d",&B[i]);
   }
   
   if(sum(A,n) < sum(B,m)){
       for(int i=0;i<n;i++){
          int min = findmin(A,n);
          int max = findmax(B,m);

          if( sum(A, n) < sum(B, m) && A[min] < B[max] ){
              int temp = A[min];
              A[min] = B[max];
              B[max] = temp;
              count++;
          }
          else{
              if( A[min] >= B[max] && sum(A, n) < sum(B, m) ){
                  count = -1;
              }
              break;

          }

       }

   }
   else{
       count =0;
   }
        //    for(int i=0;i<n;i++){
        //     printf("%d  ",A[i]);
        // }
       printf("%d\n",count);
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        checkArray();
    }

return 0;
}