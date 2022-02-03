#include<stdio.h>
#include<string.h>
int len;

int copystring(char str[],char str2[]){
    static int i=0;

    if(i==len){
        return 0;
    }

    str2[i]=str[i];
    i++;
    return copystring(str,str2);    
}
int main()
{    
    char s1[50],s2[50];
    scanf("%s",s1);
    len=strlen(s1);
    copystring(s1,s2);
  
    printf("%s",s2);
}