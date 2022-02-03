#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=1;i<=9;i++){
        int count=0;
        for(int j=0;j<len;j++){
            if(str[j]=='i'){
                count++;
            }
        }
        printf("%d",count);
    }
}