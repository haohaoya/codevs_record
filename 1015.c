#include<stdio.h>
#include<string.h>

int mian(){
	char s[1000];
	int a=0,usually=0;
	int i;
	int wei=1;
	int *p;
	scanf("%s",s);
	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]=='='){
			break;
		}
		if(s[i]=='a'){
			p=&a;
		}
	}
	return 0;
}