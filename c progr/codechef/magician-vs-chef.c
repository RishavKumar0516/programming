#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
      int x,s,n;
      int arr[n];
      scanf("%d %d %d",&x,&n,&s);
      for(int i=0;i<n;i++){
          if(x-1==i){
              arr[i]=1;
          }
          else{
              arr[i]=0;
          }
      }
      for(int i=1;i<=s;i++){
          int a,b;
          scanf("%d %d",&a,&b);
          int temp=arr[a-1];
          arr[a-1]=arr[b-1];
          arr[b-1]=temp;
      }
      for(int i=0;i<n;i++){
          if(arr[i]==1){
              printf("%d",i+1);
              break;
          }
      }
      t--;
    }
}