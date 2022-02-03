#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int countLength(int num){

     static int counter;

      /* base case */
      if(num == 0){
          return counter;
      }

      counter++;
      countLength(num/10);
 }
 
int main()
{
 int n = 4567890;
printf("%d",countLength(n));
 
 
return 0;
}