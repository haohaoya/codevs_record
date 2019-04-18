#include<stdio.h>
int main(){
	int m,n,i;
	scanf("%d%d",&m,&n);
	for(i=m<n?m:n; ;i--){
		if(m%i==0&&n%i==0){
			printf("%d",i);
			break;
		}
	}
	
	return 0;	
}