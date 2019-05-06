#include<stdio.h>
int panduan(int i){
	int j;
	if(i<=1){
		return 0;
	}
	for(j=2;j<i;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int l,r;
	int i;
	int shuchu=0;
	scanf("%d%d",&l,&r);
	for(i=l;i<=r;i++){
		if(panduan(i)==1){
			shuchu++;
		}
	}
	printf("%d",shuchu);
	return 0;
}