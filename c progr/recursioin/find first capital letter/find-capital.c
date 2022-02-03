#include<stdio.h>
#include<string.h>
#include<ctype.h>
int len;
 
 char findcapital(int s[])
 {
     static int i=0;
   if(i<len){
       if(isupper(s[i])){    
           return s[i];
       }
       else{
            i++;
            return findcapital(s); 
       }
   }
   else{
       return 0;
   }

  
 }
int main()
{   
    char s1[50];
    scanf("%s",s1);
    len=strlen(s1);   
    char k=findcapital(s1);
    if(k==0){
        printf("no any capital letter");

    }   
    else{
        printf("%c",k);
    } 
}