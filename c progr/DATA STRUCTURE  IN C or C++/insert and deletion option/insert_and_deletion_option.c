    #include<stdio.h>

    int insertion(int a[],int* p_size,int capacity,int index,int value){
        if(*p_size>=capacity){
            return -1;
        }
        for( int i=*p_size-1;i>=index;i--){
            a[i+1]=a[i];  
        }
        a[i]=value;
        *p_size+=1;
    }
    
    int deletion(int a[],int* p_size,int index){
        for(int i=index;i<*p_size-1;i++){  
            a[i]=a[i+1];
        }
        *p_size-=1;
    }
    void display(int a[],int* p_size){
        for(int i=0;i<*p_size;i++){
            printf("%d",a[i]);
            printf("  ");
        }
        printf("\n");
    }
    int main()
    {
        //insertion and deletion operation.
         int arr[50]={2,34,4,43,6,5,8,7,67,23,31,90};
         int size;
         size=12;
         display(arr,&size);
         insertion(arr,&size,50,3,34);
         display(arr,&size);
         deletion(arr,&size,5);
         display(arr,&size);
    }