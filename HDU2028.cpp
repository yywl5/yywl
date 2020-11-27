#include<stdio.h>
#include<string.h>
int gcd(int a,int b);
int gcd(int a,int b){
	int t;
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	int sum,n,i,mark1,mark2;
	while(scanf("%d",&n)!=EOF){
		scanf("%d",&mark1);
		for(i=1;i<n;i++){
			scanf("%d",&mark2);
			sum=gcd(mark1,mark2);
			mark1=mark1/sum*mark2;
		}
		printf("%d\n",mark1);
	}
	return 0; 
}

