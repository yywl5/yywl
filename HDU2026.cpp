#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char list[110];
	int len;
	int i;
	while(gets(list)){
		len=strlen(list); 
		list[0]=toupper(list[0]);
		for(i=0;i<=len;i++){
			if(list[i]==' '&&i<len){
				list[i+1]=toupper(list[i+1]);
			}
		}
		printf("%s\n",list);
	}
}
