//check whether the string is palindrome or not....
//if the reverse of the string is equall to the inputed string then thes gonna called palindrome string...

#include<stdio.h>
#include<string.h>
 
 int size;  //global variable - these can be asseciable from any function.
 
 int palindrome(char str[],int i,int j)
 {
     if(str[i]!=str[j]){
         return 0;
     }
     if(i>=j){
         return 1;
     }
     i++;   
     j--;
     return palindrome(str,i,j);
 }
int main()
{
    char s[50];
    scanf("%s",s);
    size=strlen(s);
    printf("%d",palindrome(s,0,size-1));
}