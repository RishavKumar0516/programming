#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 
int main()
{
 
char **str = (char**)malloc( 5 * sizeof(char*)); 

for(int i=0;i<5;i++){
    *(str + i) = (char*)malloc(10* sizeof(char));
}

for(int i= 0;i< 5;i++){
    scanf("%s",str+i);
}
for(int i=0;i<5;i++){
    printf("%s\n",(str+i));
}
 
 
return 0;
}