#include<stdio.h>
#include<limits.h>

int reverse(int x){
int m;
    int rev=0;
    while(x!=0){
        
        m=x%10;
              if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && m > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && m < -8)) return 0;
        rev=rev*10+m;
        x=x/10;
}
    return rev;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",reverse(num));
}