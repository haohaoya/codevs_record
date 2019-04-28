#include<stdio.h>
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("/");
		for(j=1;j<=(i-1)*2;j++){
			printf("_");
		}
		printf("\\\n");
	}
	
	return 0;
}