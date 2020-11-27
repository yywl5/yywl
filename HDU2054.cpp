#include<stdio.h>
int main(){
	double A,B;
	while(scanf("%f%f",&A,&B)!=EOF){
		if(A==B){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
