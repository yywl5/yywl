#include<stdio.h>
#include<string.h>
using namespace std;
int fibonacci(int *pNext);
int fibonacci(int *pNext){
	int list[1000];
	int i;
	int n;
	list[1]=1;
	list[2]=1;
	memset(list,0,sizeof(list));
	for(i=3;i<1000;i++){
	list[i]=list[i-1]+list[i-2];
	}
	pNext=&list[0];
	return *(pNext+n);
} 
int main(void){
	int *n,g;
	while(scanf("%d",&n)!=EOF){
		g=fibonacci(n);
		printf("%d",g);
	} 
}
