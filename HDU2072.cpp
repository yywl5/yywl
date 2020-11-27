#include<stdio.h>
#include<string.h>
int main(void){
	char number[1000];
	int i,sum;
	while(gets(number)){
		sum=1;
		if(strcmp(number,"#")==0){
			break;
		}
		for(i=0;i<strlen(number);i++){
			if(number[i]==' '&&(number[i+1]>='a'&&number[i+1]<='z')){
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
