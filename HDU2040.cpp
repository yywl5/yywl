#include<stdio.h>
int main() {
	int M,i,sum1,sum2;
	int A,B;
	scanf("%d",&M);
	while(M--) {
		sum1=0;
		sum2=0;
		scanf("%d %d",&A,&B);
		for(i=1;i<=A/2; i++) {
			if(A%i==0) {
				sum1=sum1+i;
			}
		}
		for(i=1;i<=B/2; i++) {
			if(B%i==0) {
				sum2=sum2+i;
			}
		}
		if(sum2==A&&sum1==B) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
	}
