#include<stdio.h>
#include<math.h>
int main(void){//main������ 
	int i,j;//������� 
	int n,m;
	int x,y;
	double a,t;//��ȷ��С�������� 
	while(scanf("%d%d",&n,&m)!=EOF){//������������ 
		a=0;//ÿһ�������ݱ������� 
		x=0;
		y=0;
		for(i=0;i<n;i++){//ѭ������ά������ 
			for(j=0;j<m;j++){// �� 
				scanf("%lf",&t);//�������t��ÿһ��ÿһ�е���ֵ�� 
				if(fabs(t)>fabs(a)){//�ж��������ȽϾ���ֵ�����t����a����t��ֵ����a����i��ֵ����x����j��ֵ����y�� 
					a=t;
					x=i;
					y=j;
				}
			}
		}
		printf("%d %d %.0f\n",x+1,y+1,a);//���ֵ 
	}
} 
