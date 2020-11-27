#include<Stdio.h>
int main() {
	long long a,b;
	while(scanf("%llx %llx",&a,&b)!=EOF) {
		if(a+b<0) {
			printf("-%I64x\n",-(a+b));
		} else{
			printf("%I64x\n",a+b);
		}
	}
	return 0;
}
