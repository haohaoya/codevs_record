#include<stdio.h>
int main(){
	int k;
	int i,j;
	scanf("%d",&k);
	for(j=0;j<k;j++){
		for(i=0;i<k;i++){
			printf("*");
		}
		for(i=0;i<k;i++){
			printf("x");
		}
		for(i=0;i<k;i++){
			printf("*");
		}
		printf("\n");
	}
	for(j=0;j<k;j++){
		for(i=0;i<k;i++){
			printf(" ");
		}
		for(i=0;i<2*k;i++){
			printf("x");
		}
		printf("\n");
	}
	for(j=0;j<k;j++){
		for(i=0;i<k;i++){
			printf("*");
		}
		for(i=0;i<k;i++){
			printf(" ");
		}
		for(i=0;i<k;i++){
			printf("*");
		}
		if(j!=k-1){
			printf("\n");
		}
	}	
	return 0;
}