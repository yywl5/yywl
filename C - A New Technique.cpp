#include<stdio.h>
#include<string.h>
#define n 800
#define m 800
int c1[n][m];
int c2[m][n];
long long  t;
int N,M;
//����2wrong answer;
//��֪�к��е�˳���������
//����Ҫ�õ�һ��ȥƥ���һ�е�����;
int main() {
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&N,&M);
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=M; j++) {
				scanf("%d",&c1[i][j]);
			}
		}
		for(int i=1; i<=M; i++) {
			for(int j=1; j<=N; j++) {
				scanf("%d",&c2[i][j]);
			}
		}
		for(int i=1; i<=M; i++) {
			for(int j=1; j<=N; j++) {
				if(c2[i][1]==c2[1][j]) {
					c1[j][i]=c2[i][j];
				}
			}
		}
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=M; j++) {
				if(i!=N||j!=M) {
					printf("%d ",c1[i][j]);
				} else {
					printf("%d",c1[i][j]);
				}
			}
			printf("\n");
		}
	}
}
