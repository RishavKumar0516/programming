#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int len;/* global variable */

 int findMaximum(int* arr){
     static int max = INT_MIN;
     static int i=0;

     if(i != len){

          if(arr[i] > max){
              max = arr[i];
          }
        i++;
        return findMaximum(arr);
     } 

     return max;
 }
 
int main()
{
 
  int A[] = {1,8,9,7,6,3,4,13,5,1,7};
   len =sizeof(A)/sizeof(int);
  printf("%d",findMaximum(A));
 
return 0;
}