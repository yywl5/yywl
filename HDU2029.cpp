#include<stdio.h>
#include<string.h>
int main(){
	int n,i,len,j,t;
	char list[100];
	while(scanf("%d",&n)!=EOF){
		n=0;t=0;
		for(i=1;i<=n;i++){
			t=0;
			len=0;
			gets(list);
			getchar();
			len=strlen(list);
			for(j=1;j<=len;j++){
				if('list[j]'=='list[len-j-1]')
				t++;
			}
			if(t==len){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}
	} 
} 
