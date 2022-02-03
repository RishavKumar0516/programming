#include<stdio.h>
int main(){
    int a,b,k;
    scanf("%d %d",&a,&b);
    k=a;
    if(k<=9){
        for(int j=1;j<=2;j++){
        if(k==1){
            printf("one\n");
        }
        if(k==2){
            printf("two\n");
        }
        if(k==3){
            printf("three\n");
        }
        if(k==4){
            printf("four\n");
        }
        if(k==5){
            printf("five\n");
        }
        if(k==6){
            printf("six\n");
        }
        if(k==7){
            printf("seven\n");
        }
        if(k==8){
            printf("eight\n");
        }
        if(k==9){
            printf("nine\n");
        }
        k=b;
        }
    }
        if(a<=9 && b>9){
            for(int i=10;i<=b;i++){
                if(i%2==0){
                    printf("even\n");
                }
                else{
                    printf("odd\n");
                }
            }
        }
        else if(a>=9 && b>=9){
            for(int i=a;i<=b;i++){
                if(i%2==0){
                    printf("even\n");
                }
                else{
                    printf("odd\n");
                }
            }
        }
    }
