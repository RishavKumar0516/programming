#include<stdio.h>
int main(){
int t,n;
scanf("%d",&t);
while(t>0)
{
    
scanf("%d",&n);

int a[n];
int b[n];
int count;
int max=0;
for(int j=0;j<n;j++){
scanf("%d",&a[j]);
}
for(int j=0;j<n;j++){
scanf("%d",&b[j]);
}
for(int k=0;k<n;k++){
    int count=a[k]*20-b[k]*10;
    if(count<0){
        count=0;
    }
    if(max<count){
        max=count;
    }
}
printf("%d\n",max);


t--;
}
}
