//����1:������:ǿ�б�����������,ͨ���Ա���ȵ�ֵ,�õ���,sum++.(��ĿҪ�����鲢����) 
//����ʧ��,wrong answer on test 9
 //����2:ͨ�����ƿ���ָ����������������б������.
  
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
