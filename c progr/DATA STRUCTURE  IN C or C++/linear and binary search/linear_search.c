#include<stdio.h>
//linear search.
//linear sesarch is done by array traversal.
int element_input(){
    int element;
    scanf("%d",&element);
    return element;
}
int linear_search(int ptr[],int size,int value){
    for(int i=0;i<size;i++){
        if(ptr[i]==value){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={23,34,43,56,67,78,90,55,45,2,12};
    int size=sizeof(arr)/sizeof(int);
    int elementAtIndex;
    elementAtIndex=linear_search(arr,size,element_input());//here also calling the element_input function for taking input.
    printf("%d",elementAtIndex);  
    return 0;

}