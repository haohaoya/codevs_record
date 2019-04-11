#include<stdio.h>
#include<string.h>
int main(){
	char input[200];
	char a[100];
	char b[100];
	int i,j;
	int set=0;
	int biao=0;
	gets(input);
	for(j=0;j<strlen(input);j++){
		if(set==0){
			a[biao]=input[j];
			biao++;
			if(a[biao-1]==' '){
				a[biao-1]='\0';
				set=1;
				biao=0;
			}
		}else if(set==1){
			b[biao]=input[j];
			if(b[biao]!=' '){
				biao++;
				set=2;
			}
		}else if(set==2){
			b[biao]=input[j];
			biao++;
		}
		if(j==strlen(input)-1){
			b[biao]='\0';
		}
	}
	for(i=0; ;i++){
		if(strncmp(&a[i],b,strlen(b)-1)==0){
			i++;
			printf("%d",i);
			break;
		}
	}
	return 0;
}