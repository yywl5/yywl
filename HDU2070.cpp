#include<stdio.h>
int fibonacci(__int64 n){
	int i;
	__int64 list[60];
	list[0]=0;
	list[1]=1;
	list[2]=1;
	for(i=3;i<=50;i++){
		list[i]=list[i-1]+list[i-2];
	}
	return list[n];
} 
int main(void){
	__int64 n;
	while(scanf("%d",&n)!=EOF){
		if(n==-1){
			break;
		}
		printf("%I64d\n",fibonacci(n));
	}
	return 0;
}
