#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&n);
        int a[n],b[n];
        int count=0;
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        for(int i=0;i<n;i++){
            scanf("%d",b+i);
        }
        if(a[0]>=b[0]){
             count++;
        }
        for(int j=0;j<n-1;j++){
            if((a[j+1]-a[j])>b[j+1]){
                 count++;
            }
        }
        printf("%d",count);
        t--;
    }
}