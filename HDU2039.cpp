#include<stdio.h>
int main(){
	int M; 
	double a,b,c;
	while(scanf("%d",&M)!=EOF)
	while(M--){
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a+b>c&&a+c>b&&c+b>a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
} 
