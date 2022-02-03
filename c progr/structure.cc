#include<stdio.h>
#include<stdlib.h>

struct list{
int sr;
char products[20];
float price_per_kg;	
}point item[10];
 int main{
 	int i,j;
 	for(i=0;i<10;i++){
 		scanf("%d %s %f",&item[i].sr,&item[i].products,&item[i].price_per_kg);
	 }
	 printf("sr no\t products\t price per kg");
	 for(j=0;j<10;j++){
	 	printf("%d\t%s\t%f",item[j].sr,item[j].products,item[j].price_per_kg);
	 }
}
