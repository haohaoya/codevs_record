#include<stdio.h>
int panduan(int i){
	int j;
	int cishu;
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
	int a,b,tmp;
	int shuchu=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
	for(a++;a<b;a++){
		if(panduan(a)==1){
			shuchu+=a;
		}
	}
	printf("%d",shuchu);
	return 0;
}