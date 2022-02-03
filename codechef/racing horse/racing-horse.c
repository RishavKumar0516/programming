#include<stdio.h>
#include<limits.h>

int small_element(int *arr,int len){
    int first,second;
    int diff;
    first=second=INT_MAX;
    for(int i=0;i<len;i++){
       if(arr[i]<first)
       {
           second=first;
           first=arr[i];
       }
       else if(arr[i]<second){
          second=arr[i];
       }
    }
    printf("%d %d\n",first,second);
    diff=second-first;
    return diff;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int diff=small_element(&a[0],n);
        printf("%d",diff);
    }

}