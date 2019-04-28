#include<stdio.h>
int main(){
	int x;
	int flag=0;
	int i;
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(x%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\\t");
	}else{
		printf("\\n");
	}
	
	return 0;
}