#include<stdio.h>
void check_maximum_of_boolean(int n,int k){
    int max1=0,max2=0,max3=0;
    
    for(int a=1;a<=n-1;a++){
        for(int b=a+1;b<=n;b++){
            int x,y,z;
            x=a&b;
            y=a|b;
            z=a^b;
             
            if((x)<k){
            
            if(max1<x){
                max1=x;
            }
            }

            if((y)<k){
            if(max2<y){
                max2=y;
            }
            }

            if(z<k){
            if(max3<z){
                max3=z;
            }
            }
            
        }
    }
    printf("%d\n",max1);
    printf("%d\n",max2);
    printf("%d\n",max3);
}
   
     
        int main()
        {
             int n,k;
             scanf("%d %d",&n,&k);
             check_maximum_of_boolean(n,k);
             return 0;
        }
           