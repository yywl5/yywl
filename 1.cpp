#include<stdio.h>
int main() {
	__int64 N,sum,i;
	while(scanf("%d",&N)!=EOF) {
		if(N==0) {
			printf("1\n");
		} else {
			sum=0;
			for(i=1; i<=N; i++) {
				sum=sum+i;
			}
			printf("%d\n",sum);
		}
	}
}
