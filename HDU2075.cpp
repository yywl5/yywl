#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(void){
	int T;
	long long a,b;
	scanf("%d",&T);
	getchar();
	while(T--){
		a=0;b=0;
		scanf("%d%d",&a,&b);
		if(a%b==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
} 
