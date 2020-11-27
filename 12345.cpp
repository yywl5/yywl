//标识符只能由字母，数字，下划线组成
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#define max 60
char a[max];
int n;
int c,i;
int main(){
	while(scanf("%d",&n)!=EOF){
		while(n--){
			int t=0;
			gets(a);
			c=strlen(a);
			for(i=0;i<c;i++){
				if(a[i]<'9'&&a[i]>'0'||a[i]<'z'&&a[i]>'a'||a[i]>'A'&&a[i]<'Z'||a[i]=='_'){
					t++;
				}
			}
			if(t==c){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}
	}
}
