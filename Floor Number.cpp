//彼得的公寓号码为n,第一层恒定有两层公寓,第二层则有3->x+2层公寓,第三层则有x+3->2*x+2,第四层有2*x+3->3*x+2
//((i-2)+3)->((i-1)*x+2)+1
#include<stdio.h>
#include<string.h>
int n,x;
int loop[2000];
int sum,t;
int main() {
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&n,&x);
		loop[1]=2;
		sum=0;
		if(n==1) {
			printf("1\n");
		} else if(n==2) {
				printf("1\n");
		}else {
			for(int i=2; i<=n; i++) {
				loop[i]=((i-1)*x+2)-((i-2)*x+3)+1;
			}
			for(int i=1; i<=n; i++) {
				sum=sum+loop[i];
				if(sum>=n) {
					sum=i;
					break;
				}
			}
			printf("%d\n",sum);
		}
	}
}
