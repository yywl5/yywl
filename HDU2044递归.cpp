#include<stdio.h>
long long int circle(long long int n);
long long int circle(long long int n){
	long long int list[60];
	long long i; 
	list[1]=1;
	list[2]=2;
	list[3]=3;
	if(n==1){
		return list[1];
	}else if(n==2){
		return list[2];
	}else if(n==3){
		return list[3];
	}else{
		for(i=3;i<=60;i++)
		list[i]=list[i-1]+list[i-2];
		return list[n];
	}
}
int main(){
	long long int a,b,N,t;
long long int c;
	scanf("%d",&N);
	while(N--){
		scanf("%d%d",&a,&b);
		c=b-a;
		t=circle(c);
		printf("%d\n",t);
	}
}
