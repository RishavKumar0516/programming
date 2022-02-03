#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 int len;

 char reverse(char* S, int start, int end){
     
     if( start >= end){
         return 0;
     }
     
     char c = S[start];
     S[start] = S[end];
     S[end] = c;
     start++;
     end--;
     reverse(S,start,end);
 }
 
int main()
{
 
char str[] = "this is a boy";
 len = strlen(str);
  printf("%s\n",str);
 reverse(str, 0, len-1);
 printf("%s",str);
return 0;
}