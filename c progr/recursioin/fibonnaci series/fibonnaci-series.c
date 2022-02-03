#include<stdio.h>
int temp;//global variable...
int fib(int prno,int num){
    static int i=1;
    int nxtno;
    if(i==temp)
    {
        return 0;
    }
    nxtno=prno+num;
    prno=num;
    num=nxtno;
    printf("%d  ",nxtno);
    i++;
    fib(prno,num);
}
int main()
{
   static int prno=0,num=1;
   scanf("%d",&temp);
   fib(prno,num);
   printf("\n ");
}