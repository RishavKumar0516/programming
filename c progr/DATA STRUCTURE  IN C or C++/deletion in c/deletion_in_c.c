#include<stdio.h>

int deletion(int a[],int size,int index){
    for(int i=index;i<size-1;i++){
        a[i]=a[i+1];
    }                       
}

void display(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
        printf("  ");

    }
    printf("\n");
}

int input_function(){
    int index;
    scanf("%d",&index);
}
int main()
{
    int arr[50]={23,45,56,2,34,37,10,29,5,8};
    int used_size=10;
    int index;
    input_function();
    display(arr,used_size);
    deletion(arr,used_size,input_function);
    used_size-=1;
    display(arr,used_size);
    input_function();
    deletion(arr,used_size,input_function);
    used_size-=1;
    display(arr,used_size);
}