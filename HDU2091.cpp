#include<stdio.h>
int main() {
	char x;
	char space[50][100];
	int n,i,j;
	while(scanf("%c%d",&x,&n)!=EOF) {
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				if(i==j) {
					space[j][i]=x;
				}else{
					space[j][i]=' ';
				}
			}
		}
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				printf("%c",space[j][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
