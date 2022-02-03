#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 printFibonnaciSeries(int num){
     static int sum = 0;  
    if(num<= 1){
        return num;
    }
    printf("%d",sum);
    sum =  printFibonnaciSeries(num-1) +  printFibonnaciSeries(num-2);
 }
 
int main()
{
 
printFibonnaciSeries(40);
 
 
return 0;
}