#include<stdio.h>
#include<string.h>
int main(){
	char number[15];
	int T,i;
	int len;
	scanf("%d",&T);
	while(T--){
		scanf("%s",number);//�ַ��������뷽ʽ 
		len=strlen(number);
		printf("6");
		for(i=6;i<len;i++){
			printf("%c",number[i]);
		}
		puts("");
	}
	return 0;
}
