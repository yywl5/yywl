#include<stdio.h>
int main(void) {
	int t,n;
	float g;
	float sum;
	scanf("%d",&t);
	while(t--) {
		sum=0;
		scanf("%d",&n);
		while(n--) {
			scanf("%f",&g);
			if(g>sum) {
				sum=g;
			}

		}
		printf("%.2f\n",sum);
	}
	return 0;
}
