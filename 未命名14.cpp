#include<iostream>
#include<string.h>
using namespace std;
int main() {
		int n;
	__int32 list[200000];
	while(scanf("%d",&n)!=EOF) {
			int first=1;//位数初始为一；
	list[0]=1;
	int number=0;//进位初始为0；
		for(int i=2; i<=n; i++) { //从1成到n
			number=0;
			for (int j=0; j<first; j++) { //每一位乘i
				number=list[j]*i+number;
				list[j]=number%10;        //取个位
				number=number/10;         //获取进位。
			}
			while(number) { //如有进位
				list[first]=number%10;
				number=number/10;
				first++;
			}
		}
		for(int i=first-1; i>=0; i--) { //倒序输出数组c
			printf("%d",list[i]);
		}
		printf("\n");
	}
	return 0;
}
