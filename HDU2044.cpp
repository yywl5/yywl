#include<stdio.h>
int main() {
	int N;
	int a,b;
	long long i,sum1,sum2,sum,t;
	scanf("%d",&N);
	while(N--) {
		sum1=2;
		sum2=3;
		scanf("%d%d",&a,&b);
		if((b-a)==1) {
			sum=1;
		} else if(b-a==2) {
			sum=2;
		} else if(b-a==3) {
			sum=3;
		} else {
			for(i=4;i<=b-a; i++) {
				sum=sum1+sum2;
				t=sum;
				sum1=sum2;
				sum2=t;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
