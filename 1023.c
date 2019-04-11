#include<stdio.h>
int main(){
	int n;
	int i;
	float a[100];
	float b[100];
	float sum=0;
	float shuchu=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f%f",&a[i],&b[i]);
		sum+=a[i];
	}
	for(i=0;i<n;i++){
		shuchu+=a[i]*b[i]/sum;
	}
	printf("%.2f",shuchu);
	return 0;
}