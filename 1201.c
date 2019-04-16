#include<stdio.h>
int main(){
	int n;
	int i;
	int input[100];
	int max,min;
	scanf("%d",&n);
	scanf("%d",&input[0]);
	max=input[0];
	min=input[0];
	for(i=1;i<n;i++){
		scanf("%d",&input[i]);
		if(input[i]>max){
			max=input[i];
		}
		if(input[i]<min){
			min=input[i];
		}
	}
	printf("%d %d",min,max);
	return 0;
}