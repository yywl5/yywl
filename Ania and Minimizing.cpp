//题目要求最多改变K个数,使其最小
#include<stdio.h>
int n,k;
//test7超时 优化算法 (数组开小了)
//test13错误答案    。。。。。。
//test11错误答案.....
//test14错误答案.....
//错误原因:字符未等于'1' 
char array[2000000];
int main() {
	while(scanf("%d %d",&n,&k)!=EOF) {
		getchar();
		for(int i=1; i<=n; i++) {
			scanf("%c",&array[i]);
		}
		getchar();
		if(n==1) {
			if(k==0) {
				for(int i=1; i<=n; i++) {
					printf("%c",array[i]);
				}
			} else {
				printf("0");
			}
		} else if(n!=1) {
			if(k==0) {
				for(int i=1; i<=n; i++) {
					printf("%c",array[i]);
				}
			} else {
				if(array[1]!='1') {
					array[1]='1';
					k--;
				}
				for(int i=2; i<=n; i++) {
					if(k==0) {
						break;
					}
					if(array[i]!='0') {
						array[i]='0';
						k--;
					}
					if(k==0) {
						break;
					}
				}
				for(int i=1; i<=n; i++) {
					printf("%c",array[i]);
				}
			}
		}
		printf("\n");
	}
}
