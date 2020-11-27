//尝试1:暴力法:强行遍历整个数组,通过对比相等的值,得到答案,sum++.(题目要求数组并不大) 
//尝试失败,wrong answer on test 9
 //尝试2:通过类似快慢指针来对两个数组进行遍历相加.
  
#include<stdio.h>
int n,m;
int N[130];
int sum1;
int sum2;
int M[130]; 
int sum;
int t,j;
int main(){
	while(scanf("%d %d",&n,&m)!=EOF){
		sum1=sum2=sum=0;
		t=1;
		for(int i=1;i<=n;i++){
			scanf("%d",&N[i]);
		}
		for(int i=1;i<=m;i++){
			scanf("%d",&M[i]);
		}
		for(int i=1;i<=n;i++){
			sum1=sum1+N[i];
			sum2=0;
			for( j=t;j<=m;j++){
				sum2=sum2+M[j];
				//	printf("          %d   \n",M[j]);
				if(sum1==sum2){
					sum++;
				//	printf("%d\n",sum2);
					sum1=0;
					sum2=0;
					t=j+1;
					break;
				}
				
			}
		}
		printf("%d\n",sum);
	}
}
