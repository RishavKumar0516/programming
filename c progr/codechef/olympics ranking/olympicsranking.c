#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 void checkRank(){
     int G1,S1,B1,G2,S2,B2;
     scanf("%d %d %d %d %d %d",&G1,&S1,&B1,&G2,&S2,&B2);
     int sum1 = G1+S1+B1;
     int sum2 = G2+S2+B2;
     (sum1 > sum2)? printf("1\n") : printf("2\n");
 }
 
int main()
{
 
int t;
scanf("%d",&t);
 while(t--){
     checkRank();
 }
 
return 0;
}