#include<stdio.h>
void update(int *a,int*b){
    int temp=*a;
    *a=*a+*b;
    *b=temp-*b;
    temp=*b;
    if(temp<0){
        *b=temp*(-1);
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("%d\n %d",a,b);
}