#include<stdio.h>
#include<math.h>
#include<algorithm>
//先比较奇数与偶数,因为当奇数多时，移动偶数必定为1，偶数多时，奇数必定为1.则少的一方数量相加
//test5测试样例为两者相等
//test3 测试样例为一者多一者少. 
using namespace std;
int main() {
	int n;
	int number[1000];
	int sum_odd;
	int sum_oven;
	while(scanf("%d",&n)!=EOF) {
		sum_oven=0;
		sum_odd=0;
		for(int i=0; i<n; i++) {
			scanf("%d",&number[i]);
		}
		sort(number,number+n);
		for(int i=0; i<n; i++) {
			if(number[i]%2==0) {
				sum_oven++;
			} else {
				sum_odd++;
			}
		}

		if(sum_oven>=sum_odd) {
			printf("%d\n",sum_odd);
		} else if(sum_oven<sum_odd) {
			printf("%d\n",sum_oven);
		}
	}
}
