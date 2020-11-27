#include<stdio.h>
#include<string.h>
#define MX 1000
int x[MX]; 
int map[MX][MX];
int flag=0;
int sum=0;
int n,m,edge;
void CreatMap(){
	int u,v;
	scanf("%d",&edge);
	memset(map,0,sizeof(map));
	for(int i=1;i<=edge;i++){
		scanf("%d %d",&u,&v);
		map[u][v]=map[v][u]=1;
	}
}

bool OK(int t){
	for(int j=1;j<t;j++){
		if(map[t][j]){
			if(x[j]==x[t]){
				return false;
			}
		}
	}
	return true;
} 

void Backtrack(int t){
	if(t>n){
		sum++;
		printf("第%d种方案:",sum);
		for(int i=1;i<=n;i++){
			printf("%d",x[i]);
			printf(" ");
		}
		printf("\n");
	}else{
		for(int i=1;i<=m;i++){
			x[t]=i;
			if(OK(t)&&flag==0){
				Backtrack(t+1);
				flag=1;
			}
		}
		
	}
}
int main(){
	while(scanf("%d %d",&n,&m)!=EOF){
		flag=0;
		sum=0;
	      CreatMap();
		  Backtrack(1);	
	}
}
