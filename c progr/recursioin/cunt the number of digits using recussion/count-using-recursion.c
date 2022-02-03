#include<stdio.h>
int countNum(int n){
    static int count=0;
    if(n!=0)
    {
        count++;
        countNum(n/10);

    }
    return count;
}
int main()
{
    int num;
    scanf("%d",&num);
    int k=countNum(num);
    printf("%d",k);
}