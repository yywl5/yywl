#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[11],i,j,t;
	for(i=0;i<=10;i++)
	a[i]=0;//��ʼ��Ϊ0�� 
	for(i=1;i<=5;i++){//ѭ������5���� 
		scanf("%d",&t);//��ÿһ�������뵽����t�� 
		a[t]++;//���м��� 
		
	}
	for(i=0;i<=10;i++)//�Դ��ж�a[0],a[10] 
	for(j=1;j<=a[i];j++)//�����˼��ξʹ�ӡ���� 
	printf("%d",i);
	system("pause");//������ͣ���� 
	
}
 
