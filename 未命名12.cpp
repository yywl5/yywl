#include<stdio.h>
int gcd(int a,int b) { //��չŷ�����
	if(b==0) {
		return a;
	} else {
		return gcd(b,a%b);
	}
}
int main() {
	int S,N,M;
	while(scanf("%d %d %d",&S,&N,&M)!=EOF) {
		if(S==0&&N==0&M==0) {
			break;
		}
		if(S%2!=0) {
			printf("NO\n");//�����޷�ƽ��
		} else if(((S/2)%gcd(N,M))!=0) {
			printf("NO\n");
		} else {
			printf("%d\n",(S/gcd(N,M))-1);
		}
	}
}
