#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here
 
int main()
{
 
char str[5][50],temp[50];
int n = 5;
printf("getting strings input\n");

for(int i=0;i<5;i++){
    scanf("%s",str[i]);
}
/* sorting strings in the lexicographical order. */
for(int i=0;i<n-1;i++){
   for(int j = i+1;j<n;j++){
    if(strcmp(str[i], str[j]) > 0){
       strcpy(temp,str[i]);
       strcpy(str[i],str[j]);
       strcpy(str[j],temp);
    }
   }
}

printf("printing the strings in lexicographical order\n");
for(int i=0;i<n;i++){
    printf("%s\n",str[i]);
}
return 0;
}

/* for strcmp() function */
/* if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2. */