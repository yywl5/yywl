//��Ծʽ���ӣ��ȴ����d��ʼ���ӣ������Ӻ�Ϊ
//���̰�Ĳ�����ʵ���Ǻܼ򵥵ģ��ӳ�������Զ�ĵط����������0�ͻ��ˣ�ֱ�����˵�1������ֻ��˵��˳����㣬˵��forg������ȥ�����-1��return�����ˡ�
#include<string.h>
#include<stdio.h>
using namespace std;
#define m 110
int remark;//��¼�����λ��
char trace[m];//����·������
int sum;//��¼��Ծ�Ĵ���
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
				flag=0;//��Ծʧ��
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

