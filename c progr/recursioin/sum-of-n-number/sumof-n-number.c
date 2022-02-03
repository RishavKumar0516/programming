#include<stdio.h>

//recursive function...
int sum(n){
    if(n<=1)
    return 1;
    return n+sum(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}