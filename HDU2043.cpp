#include<stdio.h>
#include<string.h>
int main(){
	int M;
	char list[60];
	int i;
	int len;
	int mark1,mark2,mark3,mark4;
	scanf("%d",&M);
	while(M--){
		getchar();
		mark1=mark2=mark3=mark4=0;
		gets(list);
		
		len=strlen(list);
		for(i=0;i<len;i++){
			if(list[i]>'A'&&list[i]<'Z'){
				mark1++;
			}
			if(list[i]>'a'&&list[i]<'z'){
				mark2++;
			}
			if(list[i]>'0'&&list[i]<'9'){
				mark3++;
			}
			if(list[i]=='~'||list[i]=='^'||list[i]=='!'||list[i]=='@'||list[i]=='#'||list[i]=='$'||list[i]=='%'){
				mark4++;
			}
		}
		if((mark2>0&&mark3>0&&mark4>0&&mark1==0)||(mark1>0&&mark2==0&&mark3>0&&mark4>0)||(mark1>0&&mark2>0&&mark3==0&&mark4>0)||(mark1>0&&mark2>0&&mark3>0&&mark4==0)||(mark1>0&&mark2>0&&mark3>0&&mark4>0)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0; 
}
