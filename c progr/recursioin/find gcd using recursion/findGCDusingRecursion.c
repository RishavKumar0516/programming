#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here


 int findGCD(int a, int b){

     if(b <= 0){
        return a;
     }
     findGCD(b, a%b);
 }
 
int main()
{
 
int a,b;
scanf("%d %d", &a, &b);
printf("%d",findGCD(a, b));
 
return 0;
}