#include<stdio.h>
#include<stdlib.h>
int tmp(const void *a, const void *b){
	return *(int*)a-*(int*)b;
}

int main(){
	int shu[100001];
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&shu[i]);
	}
	qsort(shu,n,sizeof(shu[0]),tmp);
	for(i=0;i<n;i++){
		printf("%d ",shu[i]);
	}
	return 0;
}