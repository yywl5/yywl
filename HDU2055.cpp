#include<stdio.h>
//先做一个判断是否输入字符为大写还是小写；如果为大写字母，则减去64，如果为小写字母，则先减去96，然后在减去它们自身的两倍； 
int main(){
	int t;
	char English;
	int g; 
	int Number;
    scanf("%d",t);
    getchar();
    while(t--){
    	scanf("%c %d",&English,&Number);
    	if(English<='Z'&&English>='A'){
    		g=English-'A'+1;
		}else if(English<='z'&&English>='a'){
			g='a'-English-1;
		}
		printf("%d\n",g+Number); 
	}
	return 0;
} 
