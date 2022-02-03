#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int printNUmber(int n){  /* these prints number in decending order */

     /* base case */
     if( n == 1){
         printf("%d  ",n);
         return 1;
     }

     printf("%d  ",n);
     return printNUmber(n-1);
     
 }

 int printNUmber2(int n){   /* these prints number in ascending order */
     if(n == 1){
         printf("%d  ",n);
         return 1;
     }

     printNUmber2(n-1);
     printf("%d  ",n);
 }  
 
 
 // these above code can also written as :-


// int printNUmber2(int n){   /* these prints number in ascending order */
//      if(n != 1){
//           printNUmber2(n-1);
//           printf("%d  ",n);
//      }
      
//           printf("%d",n);
//           return 1;
    
//  }

 
int main()
{
 
printNUmber(50);
printf("\n");
printNUmber2(50);
 
 
return 0;
}