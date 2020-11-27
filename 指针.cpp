#include<stdio.h>
#include<string.h>
using namespace std; 
int main(void){
	int *p;
    int list[100];
	memset(list,0,sizeof(list));
	list[1]=5;
	p=&list[1];
	printf("%p",p); 
}
