#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int binaryIs(int n){

     if(n <= 0)
     return 0;
   
   binaryIs(n/2);
   printf("%d",n%2);

 }
 
int main()
{
 
int num = 66;

 binaryIs(num);
 
return 0;
}