#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define M 1200
int c[M][M];
int w[M];
int v[M];
int N,V;
int main() {
	while(scanf("%d %d",&N,&V)!=EOF) {
		memset(c,0,sizeof(c));
		memset(w,0,sizeof(w));
		memset(v,0,sizeof(v));
		for(int i=1; i<=N; i++) {
			scanf("%d %d",&w[i],&v[i]);
		}
		for(int i=1; i<=N; i++) {
			for(int j=V; j>=1; j--) {
				if(j<w[i]) {
					c[i][j]=c[i-1][j];
				} else {
					c[i][j]=max(c[i-1][j],c[i-1][j-w[i]]+v[i]);
				}
			}
		}
		printf("%d\n",c[N][V]);
	}
	return 0;
}
