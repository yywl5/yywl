#include<stdio.h>
int main(void){
	int i,n,m,flag=0;;
	int left,right;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==0&&m==0)
		break;
		flag=0;
		left=-10000;
		right=10000;
		for(i=left;i<=right;i++){
			if(i*(n-i)==m){
				flag=1;
			}
		}
		if(flag==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
