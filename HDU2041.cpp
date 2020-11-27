#include<stdio.h>
int main(){
	int N;
	int a,sum,i;
	scanf("%d",&N);
	while(N--){
		sum=0;
		scanf("%d",&a);
		sum=3;
		for(i=a;i>=1;i--){
			sum=(sum-1)*2;
		}
		printf("%d\n",sum);
	}
}
