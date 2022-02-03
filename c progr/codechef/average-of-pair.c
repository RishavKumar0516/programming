#include<stdio.h>
int main(){
    int t,n,i;
    int count=0;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&n);
        int arr[n];
          int count=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++){
               int k=(arr[i]+arr[i+1])/2;
               for(int m=0;m<n;m++){
                   if(arr[m]==k){
                       count+=1;
                       break;
                   }
                }
       
        }
        printf("%d",count);
        t--;
    }
}