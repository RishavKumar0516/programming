#include<stdio.h>
int evaluation(int a,int b,int c){
int r=a*b+c;
return r;
}
int inputable(){
    int p;
    scanf("%d",&p);
    return p;
}
int main(){
    int a=3,b=2;
    int k=evaluation(a,b,inputable());
    printf("%d",k);
    return 0;

}