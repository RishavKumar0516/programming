
#include<stdio.h>
#include<stdlib.h>

static int roman_to_integer(char ch)
{
    switch(ch)    
    {
        
    case 'I':
        return 1;

    case 'V':
        return 5;

    case 'x':
        return 10;

    case 'L':
        return 50;

    case 'C':
        return 100;

    case 'D':
        return 500;

    case 'M':
        return 1000;
    
    default:
        return 0;
       
    }
}

int roman_to_int(char *s){
 int res = roman_to_integer(s[0]);
 int i;
 for(i=1;i!='\0';i++){
     int prev = roman_to_integer(s[i-1]);
     int curr = roman_to_integer(s[i]);
     if(prev < curr){
        int res = res - prev + (curr - prev);
     }
     else if(prev>=curr){
         res += curr;
     }
 }
 return res;
}

int main(){
    char *str="IX";
     printf("%s",str);
    printf("%d",roman_to_int(str));
  
}
/*


#include <stdio.h>
#include <stdlib.h>
static int roman_to_integer(char c)
{
    switch(c) {
    case 'I':  
        return 1;  
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}

int roman_to_int (char *s)
{
    int i, int_num = roman_to_integer(s[0]);

    for (i = 1; s[i] != '\0'; i++) {
        int prev_num = roman_to_integer(s[i - 1]);
        int cur_num = roman_to_integer(s[i]);
        if (prev_num < cur_num) {
            int_num = int_num - prev_num + (cur_num - prev_num);
        } else {
            int_num += cur_num;
        }
    }
    return int_num;
}
int main(void)
 {
  char *str1 = "XIV";
    printf("Original Roman number: %s", str1);
    printf("\nRoman to integer: %d", roman_to_int(str1));
    return 0;
}
*/