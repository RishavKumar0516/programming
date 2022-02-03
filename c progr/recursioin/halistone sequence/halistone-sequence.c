#include<stdio.h>

int halistone(int n){
    static int count=0;
    if(n==1)
    return count;
    if(n%2==0)
    n/=2;
    else
    n=3*n+1;

    count++;
    printf("%d  ",n);
    return halistone(n); 
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("\n%d",halistone(num));
}