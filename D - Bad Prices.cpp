//����ĿҪ��۲쵱ǰ�����������֮������Ƿ��бȵ�ǰ����С����,�����������һ�����ȵ�ǰ����������С,��ô�����������Ϊbad price;
//����:n=6;�� 2 5  1 3 4 5,��ô2������1��2С,5������1,3,4��5С,��bad price Ϊ2
//wrong:test3��ʱ...(test3Ϊ����������,�������޷�ͨ��)
//���Է���,��Ϊ��ĿҪ���������ȵ�ǰ����С�������ǰ��������ں����������ǰ��Ϊbad_price; 
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
