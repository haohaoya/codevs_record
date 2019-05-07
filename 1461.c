#include<stdio.h>
int main(){
	char s[201];
	char i;
	int shuchu=0;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]==' ' || s[i]=='a' || s[i]=='d' || 
		s[i]=='g' || s[i]=='j' || s[i]=='m' || 
		s[i]=='p' || s[i]=='t' || s[i]=='w'){
			shuchu+=1;
		}else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || 
		s[i]=='k' || s[i]=='n' || s[i]=='q' || 
		s[i]=='u' || s[i]=='x'){
			shuchu+=2;
		}else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || 
		s[i]=='l' || s[i]=='o' || s[i]=='r' || 
		s[i]=='v' || s[i]=='y'){
			shuchu+=3;
		}else if(s[i]=='s' || s[i]=='z'){
			shuchu+=4;
		}
	}
	printf("%d",shuchu);
	return 0;
}