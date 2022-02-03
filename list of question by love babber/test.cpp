#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 int compare(char* t, int position, char* s, int length){
     int flag = 0;
for(int i = 0; i < length; i++){
    if(t[position + i] == s[i]){
        flag = 1;
    }
    else{
        flag = 0;
        break;
    }
}
return flag;
 }
 
int main()
{
 char t[16] = "oxxoxxoxxoxxoxx";
char s[11];
scanf("%s", s);
int length = strlen(s);
// printf("%d",length);
int i = 0;
int j = 1, position = 0;
if(s[i] == 'x' && s[j] == 'x'){
    position = 1;
}
if(s[i] == 'x' && s[j] == '0'){
    position = 2;
}
if(s[i] == '0' && s[j] == 'x'){
    position = 0;
}
    int flag = compare(t, position, s, length);
    if(flag == 1){
        printf("yes");
    }
    else{
        printf("no");
    }

return 0;
}