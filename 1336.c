#include<stdio.h>
int main(){
	int n,m;
	int ren[50000];
	int i,j;
	int max,min;
	int zishi,cishu;
	int output1,output2;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		scanf("%d",&ren[0]);
		max=ren[0];
		min=ren[0];
		for(i=1;i<m;i++){
			scanf("%d",&ren[i]);
			if(max<ren[i]){
				max=ren[i];
			}
			if(min>ren[i]){
				min=ren[i];
			}
		}
		output1=999999999;
		for(i=min;i<=max;i++){
			zishi=i;
			cishu=0;
			for(j=0;j<m;j++){
				cishu+=zishi>ren[j]?zishi-ren[j]:ren[j]-zishi;
			}
			if(cishu<output1){
				output1=cishu;
				output2=zishi;
			}
		}
		printf("%d %d\n",output2,output1);
	}
	return 0;
}