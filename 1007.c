#include<stdio.h>
int main(){
	double s=0;
	double k;
	int i;
	scanf("%lf",&k);
	for(i=1;s<=k;i++){
		s=s+1.0/(double)i;
	}
	i--;
	printf("%d",i);
	return 0;
} 