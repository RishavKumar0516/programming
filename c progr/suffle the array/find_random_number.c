#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 void swap(int* a, int* b){
     int temp = *a;
     *a = *b;
     *b = temp;
 }

 void randomize(int arr[], int size){
     srand(time(NULL));
     for(int i = size-1; i>0; i--){
         int j = rand() % (i+1);
         swap(&arr[i], &arr[j]);
        
     }
 }

 void printarray(int* arr, int size){
      for(int i=0;i<size;i++){
          printf("%d  ",arr[i]);

      }
 }
 
int main()
{
 
int arr[] = {2,4,5 };
int n = sizeof(arr)/sizeof(arr[0]);
randomize(arr, n);
printarray(arr, n);
return 0;
}