#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char shu[100];
	int k;
	int i;
	char *p;
	scanf("%s",shu);
	scanf("%d",&k);
	if(k==0){
		printf("%s",shu);
	}else if(abs(k)>strlen(shu)){
		printf("Error");
	}else if(k>0){
		shu[k]='\0';
		printf("%s",shu);
	}else if(k<0){
		p=&shu[strlen(shu)+k];
		while(*p=='0'){
			if(p=&shu[strlen(shu)-1]){
				printf("0");
				return 0;
			}
			p++;
		}
		printf("%s",p);
	}
	
	return 0;
}