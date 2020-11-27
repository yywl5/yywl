#include<stdio.h>//µü´ú½â·¨ 
int fibonacci(int n){
	int i,sum=2;
	int list1=1,exchange,list2=1,list;
	for(i=3;i<=n;i++){
		list=list1+list2;
		list2=list1;
		list1=list;
		sum=sum+list;
	}
	return sum;
} 
int main(void){
	int n,sum;
	while(scanf("%d",&n)!=EOF){
		sum=0;
		sum=fibonacci(n);
		printf("%d\n",sum);
	}
	return 0;
}
