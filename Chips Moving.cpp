#include<stdio.h>
#include<math.h>
#include<algorithm>
//�ȱȽ�������ż��,��Ϊ��������ʱ���ƶ�ż���ض�Ϊ1��ż����ʱ�������ض�Ϊ1.���ٵ�һ���������
//test5��������Ϊ�������
//test3 ��������Ϊһ�߶�һ����. 
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
