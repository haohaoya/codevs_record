#include<stdio.h>
int main(){
	int n;
	int sum=0;
	int input;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input);
		sum+=input;
	}
	printf("%d",sum);
	return 0;
}