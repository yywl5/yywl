#include<stdio.h>
int swap(int *p,int *q);
int swap(int *p,int *q){
	int t;
	t=*p;
	*p=*q;
	*q=t;
} 
int main(){
	int i=0;
	int a[10];
	a[0]=1;
	a[1]=2;
	int *p,*q;
	p=&a[0];
	q=&a[1];
	printf("%p%p",swap(p,q));
	printf("0x%x\n",&i);
	printf("%p\n",&i);
	printf("lu\n",sizeof(&i));

	 
	return 0;
} 
//���ڵ�ַ֮���4
//һ��ָ�����͵ı������Ǳ����ַ�ı���
//int *p��*�ȿ��Կ���int��Ҳ���Կ���p����ʾp��һ��ָ�롣
//��ͨ������ֵ��ʵ�ʵ�ֵ
//int i=0�� f��&i����
// 
