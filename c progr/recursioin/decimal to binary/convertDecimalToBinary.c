#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int convertDecimalToBinery(int n){

   if( n == 0){
       return 1;
   }

   convertDecimalToBinery(n/2);
   printf("%d  ",n%2);

 }
 
int main()
{
 
convertDecimalToBinery(25);
 
 
return 0;
}