#include<stdio.h>
int main(){
	int w,x,y,z;
	int cha21,cha32,cha43;
	scanf("%d%d%d%d",&w,&x,&y,&z);
	cha21=x-w;
	cha32=y-x;
	cha43=z-y;
	if(cha21==0&&cha32==0&&cha43==0){
		printf("Fish At Constant Depth");
	}else if(cha21>0&&cha32>0&&cha43>0){
			printf("Fish Rising");
	}else if(cha21<0&&cha32<0&&cha43<0){
			printf("Fish Diving");
	}else{
		printf("No Fish");
	}
	return 0;
}