#include<stdio.h>
int main(){
	int n;
	int i;
	int shuchu=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		shuchu*=i;
	}
	printf("%d",shuchu);
	return 0;
}