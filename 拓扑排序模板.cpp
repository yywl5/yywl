#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MAX 1000
int G[MAX][MAX],vis[MAX],topo[MAX];
int n,m;//点数，边数
stack<int> s;
bool dfs(int u) {
	vis[u] = -1;
	for(int i = 0; i < G[u].size(); i++) {
		int v = G[u][i];
		if(vis[v] == -1) return 0;
		else if(!vis[v] && !dfs(v)) return 0;
	}
	vis[u] = 1;
	topo[cnt--] = u;
	return 1;
}
bool toposort() {
	cnt = n;
	memset(vis, 0, sizeof(vis));
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			if(!dfs(i))
				return 0;
		}
	}
	return 1;
}

int main() {
	int x,y;
	while(~scanf("%d%d",&n,&m)) {
		if(n==0&&m==0) {
			break;
		}
		memset(r,0,sizeof r);//将入度数组初始化为0
		memset(nap,0,sizeof nap);//将整个图的二维数组初始化为0
		for(int i=1; i<=m; i++) {
			cin>>x>>y;//读入每一条边长
			if(!nap[x][y]) {
				nap[x][y]=1;//将存在边的标记上
				r[y]++;//计算每个入度
			}
		}
		int sum=tosort();
		if(sum==0) {
			printf("NO\n");
		} else {
			printf("yes\n");
		}

	}
}
