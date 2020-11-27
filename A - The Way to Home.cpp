//跳跃式增加，先从最大d开始增加，如果相加后为
//这个贪心策略其实还是很简单的，从出发点最远的地方跳，如果是0就回退，直到回退到1，如果又回退到了出发点，说明forg跳不过去。输出-1，return就行了。
#include<string.h>
#include<stdio.h>
using namespace std;
#define m 110
int remark;//记录到达的位置
char trace[m];//输入路径条件
int sum;//记录跳跃的次数
int n,d,i,j;
int flag;
int main() {
	while(scanf("%d %d",&n,&d)!=EOF) {
		sum=0;
		remark=0;
		flag=1;
		scanf("%s",trace);
		getchar();
		for( i=0; i<n; i++) {
		if(i!=0){
			i--;
		}	
		//	printf("    %d\n",i);
			for( j=d; j>=0; j--) {
				if(j>d){
					j=d-1;
				}
				if(trace[i+j]=='1'&&i<=n-1) {
					remark=i+j;
					i=i+j;
					sum++;
				//	printf("%d ",remark);
				//	printf("\n");
					break;
				}
				if(i>n-1){
					break;
				}
			}
			if(j==0) {
				flag=0;//跳跃失败
				printf("-1\n");
				break;
			}
		}
		if(i>=n-1){
			flag=1;
		}
		if(flag==1) {
			printf("%d\n",sum);
		}
	}
}

