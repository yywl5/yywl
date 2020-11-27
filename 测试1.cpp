#include<stdio.h>
int main(){
	int a[4]={1,2,3,4};
	int b[4]={5,6,7,8};
	int c=0;
	int *p=a; 
	while(*p){
		c++;
		p++;
	}
	printf("%d",c);
}
