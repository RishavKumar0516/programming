#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char* s;
    int i=0;
    s=(char*)malloc(1000*sizeof(char));
    scanf("%s",s);
    int len=strlen(s);
    s=realloc(s,len+1);
    while(s[i]!='\0'){
        if(s[i]==" "){
            printf("\n");
        }
        else{
            printf("%c",s[i]);
        }
        i++;
    }
    free(s);
}