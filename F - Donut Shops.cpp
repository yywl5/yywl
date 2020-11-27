#include<stdio.h>
#include<string.h>
//已知x大于0且小于109.线性规划问题; 
using namespace std;
int t ,i;
int a,b,c;
int sign1,sign2;
int flag1,flag2;
int main(){
	scanf("%d",&t);
	while(t--){
		sign1=0;
		flag1=0;
		flag2=0;
		sign2=0;
		scanf("%d %d %d",&a,&b,&c);
		for( i=1;i<=109;i++){
			if(i*a<(i/b+1)*c){
				sign1=i;
				flag1=1;
				break;
			}
		}
		for( i=1;i<=109;i++){
			if(i*a>(i/b+1)*c){
				sign2=i;
				flag2=1;
				break;
			}
		}
		if(flag1=0){
			printf("-1 ");
		}else{
			printf("%d",sign1);
		}
		if(flag2=0){
			printf("-1");
		}else{
			printf("%d",sign2);
		}
		printf("\n");
	}
} 
 
