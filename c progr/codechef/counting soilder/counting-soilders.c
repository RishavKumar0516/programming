#include<stdio.h>
  int len,len1;
int find_max_len(int first,int last){
   
    int position=first+1;
    if(last-first<=1){

        return len1;
    }
    len1+=(position-first)+(last-position);
    find_max_len(position,last);
}
int find_min_len(int first,int last){
    
    
    if(last-first<=1){
    
        return len;
    }
    int position=(first+last)/2;
    len+=(position-first)+(last-position);
     find_min_len(first,position);
     find_min_len(position,last);
}

int main(){
    int t,n,m;
    int minlen,maxlen;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        len=0;
        len1=0;
        maxlen=find_max_len(0,n+1);
        minlen=find_min_len(0,n+1);

        if(minlen > m){
           printf("-1\n");
        }
        else if(maxlen <= m){
        printf("%d\n",(m-maxlen));
        }
        else if(maxlen > m && minlen <= m){
        printf("0\n");
        }
        
    }
}