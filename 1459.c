#include<stdio.h>
int main(){
	int max;
	int num[11];
	int n;
	int i,j;
	int flag;
	scanf("%d",&n);
	scanf("%d",&num[0]);
	max=num[0];
	for(i=1;i<n;i++){
		scanf("%d",&num[i]);
		if(max<num[i]){
			max=num[i];
		}
	}
	for(i=max; ;i++){
		flag=0;
		for(j=0;j<n;j++){
			if(i%num[j]!=0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}