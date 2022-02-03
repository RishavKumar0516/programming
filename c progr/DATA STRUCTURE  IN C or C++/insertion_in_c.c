#include<stdio.h>

int insertion(int arr[],int size,int capacity,int element,int index){
if(size>=capacity){
 return -1;
}
for(int i=size-1;i>=index;i--){
    arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
}


void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
}
int main(){
    int arr[50]={23,45,34,78,67,90,23};
    int capicity=50;
    int size=7,value,index;
    display(arr,size);
    scanf("%d %d",&value,&index);
    int k=insertion(arr,size,50,value,index);
    size+=1;
    if(k==1){
     printf("insertion sucessfully completed\n");
     display(arr,size);
    }else{
        printf("insertion failed");
    }
    
    
}