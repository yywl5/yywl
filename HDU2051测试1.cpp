#include<stdio.h>
int main(void){
	int n,i,j,record[100];
	while(scanf("%d",&n)!=EOF){
		i=0;
		while(n){
			record[i]=n%2;
			i++;
			n=n/2;
		}
		i--;
		while(i>=0){
			printf("%d",record[i]);
			i--;
		}
		printf("\n");
	} 
	return 0; 
}
