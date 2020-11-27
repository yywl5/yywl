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
//相邻地址之间差4
//一个指针类型的变量即是保存地址的变量
//int *p中*既可以靠近int，也可以靠近p。表示p是一个指针。
//普通变量的值是实际的值
//int i=0； f（&i）；
// 
