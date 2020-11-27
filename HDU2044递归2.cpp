#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	long long int a,b,N,f[55];
	int i;
	scanf("%d",&N);
	f[1]=1;
	f[2]=2;
	while(N--){
		scanf("%d%d",&a,&b);
		for(i=3;i<55;i++){
			f[i]=f[i-1]+f[i-2];
		}
		printf("%lld\n",f[b-a]);
	}
	return 0;
} 
