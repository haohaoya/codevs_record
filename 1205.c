#include<stdio.h>
int main(){
	char x[100][100];
	int i;
	for(i=0; ;i++){
		if(scanf("%s",x[i])==EOF){
			break;
		}
	}
	for(i--;i>0;i--){
		printf("%s ",x[i]);
	}
	printf("%s",x[0]);
	return 0;
}