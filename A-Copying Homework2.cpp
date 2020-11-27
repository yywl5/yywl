#include<stdio.h>
int n,sum,t;
int array[15000000];
int sign[15000000];
int main() {
	while(scanf("%d",&n)!=EOF) {
		sum=0;
		for(int i=1; i<=n; i++) {
			scanf("%d",&array[i]);
		}
		for(int i=1; i<=n; i++) {
			sign[i]=n+1-array[i];
		}
		for(int i=1; i<=n; i++) {
			if(i!=n) {
				printf("%d ",sign[i]);
			} else {
				printf("%d\n",sign[i]);
			}
		}
		printf("\n");
	}
}
