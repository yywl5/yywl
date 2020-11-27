#include<stdio.h>
#include<string.h>
using namespace std;
int fun1(char &sp);
int fun1(char &sp){
	int len,i,t=0;
	len=strlen(&sp);
	for(i=0;i<len;i++){ 
		if((sp+i)==(sp+len-i-1))
		t=t+1;
	}
	if(t==len){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	char *sp;
	char t;
	gets(sp);
	t=fun1(sp);
	if(t==1){
		printf("ÊÇ\n"); 
	}else if(t==0){
		printf("²»ÊÇ\n");
	}
} 
