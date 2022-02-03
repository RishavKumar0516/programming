#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int size;

//  int printArray(int* p, int len){
//    if(len == 0){
//     printf("%d  ", p[len]);
//        return 0;
//    }
//    else{
//     //    printf("%d  ", p[len]);
//        printArray(p, len-1);
//        printf("%d  ", p[len]);
//    }
//  }

 int printArray(int* p){

     static int i=0;
    
   if(i == size){

       return 0;
   }
   else{
       printf("%d  ", p[i]);
       i++;
       printArray(p);
       
   }
 }
 
int main()
{
 int arr[] ={1,2,3,4,5,6,7,8,9,10};
 size =sizeof(arr)/sizeof(int);
// printArray(arr,size-1);
 printArray(arr);
 
 
return 0;
}