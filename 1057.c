#include<stdio.h>
int main(){
	int yusuan[12];	//每月预算
	int i;			//循环变量
	int qian=0;		//小明手里的钱
	int n=0;		//小明存过多少次100。比如存300，n=3
	for(i=0;i<12;i++){
		scanf("%d",&yusuan[i]);
	}				//输入每月预算
	for(i=0;i<12;i++){	//循环12次，即十二个月
		qian+=300;		//每月开始，妈妈给300
		if(qian<yusuan[i]){
			printf("-%d",i+1);
			return 0;
		}			//如果给完以后的qian还不够预算，
					//输出当前月，i从0开始。第i次循环，第i+1月
		while(qian>=yusuan[i]){
			qian-=100;
			n++;
		}			//当钱多余预算，就存100。次数也+1
		qian+=100;	//循环出来，钱不够了，少存100
		n--;		//存的次数也少一次。
		qian-=yusuan[i];//花掉预算，下个月手里剩余的钱
	}
	qian=qian+n*120;//十二个月后手里剩的钱+存的次数*120。
					//因为每次存100，最后都给120。
	printf("%d",qian);//输出钱数。
	return 0;
}