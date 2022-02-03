#include<stdio.h>
#include<limits.h>
int main()
{
    int k = 2147483647;// largest positive number int can store (2^32)-1 = 2147483647.
    printf("%d\n",k);

    k = 2147483647 + 1;
    printf("%d\n",k);  // these shows integer overflow message and print the largest smallest   negative number that integer can store.

    int num = -2147483648;  // smallest negative number int can store (2^32)-1 = -2147483648.
    printf("%d\n",num);

    num = -2147483648 - 1;
    printf("%d\n",num);   //these also show integer overflow message and print the largest positive number that integer can store.

    int min = INT_MAX;
    int max = INT_MIN;

    printf("%d",min);
    printf("%d",max);
}