#include<stdio.h>
#include<stdlib.h>
struct list{
int sr;
char products[20];
float price_per_kg;	
};

  int main()
 {
 	int i,j,n;
 	list item[n];
 	for(i=0;i<n;i++){
 		scanf("%d %s %f",&item[i].sr,&item[i].products,&item[i].price_per_kg);
	 }
	 printf("sr no\t products\t price_per_kg");
	 for(j=0;j<n;j++){
	 	printf("%d\t%s\t%f",item[j].sr,item[j].products,item[j].price_per_kg);
	 }
}
