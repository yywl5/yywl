//该题目要求观察当前天数代表的数之后的数是否有比当前天数小的数,如果存在任意一个数比当前天数的数字小,那么便代表当天天数为bad price;
//举例:n=6;有 2 5  1 3 4 5,那么2后面有1比2小,5后面有1,3,4比5小,则bad price 为2
//wrong:test3超时...(test3为大数据样例,暴力法无法通过)
//尝试方案,因为题目要求后面的数比当前的数小，则如果前面的数大于后面的数即当前数为bad_price; 
#include<stdio.h>
int t;
int n;
int number[160000];
int flag;
int sum;
int main(){
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&number[i]);
		}
			flag=number[n];
		for(int i=n;i>=1;i--){
			if(flag>number[i]){
				flag=number[i];
			}else if(flag<number[i]){
				sum++;
			}
			
		}
		printf("%d\n",sum);
	}
} 
