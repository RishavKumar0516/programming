#include<stdio.h>

int input_element(){
    int element;
    scanf("%d",&element);
    return element;
    
}
int binary_search(int arr[],int length,int element){
  int low,high,mid;
  low=0;
  high=length-1;
  while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==element){
      return mid;
    }
    if(arr[mid]<element){
      low=mid+1;
    }
    else{   
      high=mid-1;

    }
  }
  return -1;
}
int main(){
    int arr[]={2,4,6,9,12,15,17,19,21,25,29,31};   
    int size=sizeof(arr)/sizeof(int);
    int element=input_element();
    int search_index=binary_search(arr,size,element);
    if(search_index==-1){
      printf("Element not found");     
    }
    printf("the element %d was found at %d",element,search_index);  
    return 0;
}