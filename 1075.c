#include<stdio.h>
int t[1001];
int main(){
	int x;
	int flag = 0;
	int i;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		t[x]++;
	}
	n++;
	for(i = 0; i < 1001; i++){
		if(t[i]!=0){
			n++;
		}
	}
	printf("%d\n",n);
	for(i = 0; i < 1001; i++){
		if(t[i]!=0){
			printf("%d ",i);
		}
	}
	return 0;
}