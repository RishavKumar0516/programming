  #include<stdio.h>
  
  struct myARRAY{
      int total_size;
      int used_size;
      int* ptr;
  };
  

  int createArray(struct myARRAY* a,int t_size,int u_size){
     /* 
      (*a).total_size=t_size;
      (*a).used_size=u_size;
      (*a).ptr=(int*)malloc(t_size*sizeof(int));
      */


      a->total_size=t_size;
      a->used_size=u_size;
      a->ptr=(int*)malloc(t_size*sizeof(int));

  }

  void setVal(struct myARRAY* a){
       int n;
       for( int i=0;i<a->used_size;i++){
         printf("enter the value\n");
         scanf("%d",&n);
         a->ptr[i]=n;
       }
  }

  void display(struct myARRAY* a){
      for(int i=0;i<a->used_size;i++){
         printf("%d ",a->ptr[i]);
         printf("  ");
      }
      printf("\n");
  }

  void setValAtIndex(struct myARRAY* a,int position,int value){
      a->ptr[position]=value;
  }

  void getValueAtIndex(struct myARRAY* a,int position){
      printf("the value at index %d is %d",position,a->ptr[position]);
  }
  int main(){
      struct myARRAY marks;
      int value,index1,index2;
      createArray(&marks,10,4);
      setVal(&marks);
      display(&marks);
      scanf("%d%d",&index1,&value);
      setValAtIndex(&marks,index1,value);
      display(&marks);
      scanf("%d",&index2);
      getValueAtIndex(&marks,index2);
  }

