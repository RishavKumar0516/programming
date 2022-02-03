#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t>0){
        int activity,total=0,i;
        char origin[100],work[100];
        scanf("%d",activity);
        scanf("%s",origin);
        for(i=0;i<activity;i++){
            scanf("%s",work);
            if(work=="CONTEST_WON"){
               int rank;
               scanf("%d",&rank);
               if(rank<20){
                   total+=300+200-rank;
               }
               else{
                   total+=300;
               }
            }
            else if(work=="TOP_CONTRIBUTOR"){
                total+=300;
            }
            else if(work=="BUG_FINDER"){
                int severity;
                scanf("%d",&severity);
                total+=severity;

            }
            else if(work=="CONTEST_HOSTED"){
                total+=50;
            }
        }
        if(origin=="INDIAN"){
            printf("%d",total/200);
        }
        else{
            printf("%d",total/400);
        }
        t--;
    }
}