#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 int len;



 int palindromeString(char* first, char* last){ /* using the pointer */
    if(first < last){
        if(*first != *last){
           return 0;
        }
        else{
            palindromeString(first+=1, last-=1);
        }
    }
    else{
        return 1;
    }

 }
 
int main()
{
   scanf("%d",&len);
//  char str[]="lameoemal";
 char str[len];
  for(int i=0;i<len;i++){
      scanf("%c",&str[i]);
  }
//  len= strlen(str);
 if(palindromeString( str, str+len-1))
  printf("is palindrome string");
 else
 printf("not a palindrome string");
 
 printf("%s",str);
return 0;
}