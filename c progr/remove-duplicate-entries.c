#include<stdio.h>
int main(){
    int nums[]={0,0,1,1,1,2,2,3,3,4};
    int size=sizeof(nums)/sizeof(int);
    int i,j,k;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(nums[i]==nums[j]){
                  for(k=j;k<size-1;k++){
                   nums[k]=nums[k+1];
                  } 
                  size--;
                  j--;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d",nums[i]);
    }
}