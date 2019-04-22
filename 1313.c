#include<stdio.h>
int panduan(int i){
	int j;
	for(j=2;j<i/2;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	int i;
	scanf("%d",&n);
	for(i=n/2;i>=2;i--){
		if(n%i==0){
			if(panduan(n/i)==1&&panduan(i)==1){
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}