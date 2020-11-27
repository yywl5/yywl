#include<iostream>
#include<cstring>
#include<queue>
#include<stdio.h>
using namespace std;

int nap[20][20],r[20],topo[20];
int n,m;

int topoq()
{
	int cnt=0;
	queue<int> q;
	for(int i=1;i<=n;i++)//将所有入度为0的点入队列 
	{
		if(r[i]==0)
		{
			q.push(i);
			r[i]--;//防止二次入队 
		}
	}
	while(!q.empty())
	{
		int u=q.front();//将队列的一个取出 
		q.pop();//将取出的点从队列删除 
		topo[cnt++]=u;//存进排序数组 
		for(int i=1;i<=n;i++)
		{
			if(nap[u][i])
			{
				r[i]--;//减掉 u后续的入度减掉 
				if(!r[i]) q.push(i);//为0入队 
			}
		}
	}
	return cnt;
}

int main()
{
	int x,y;
	memset(r,0,sizeof r);//初始化为0，存取入度 
	memset(nap,0,sizeof nap);//初始化为0，存取图 
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=1;i<=m;i++){
			scanf("%d%d",&x,&y);//输入点 
			if(!nap[x][y])
			{
				nap[x][y]=1;//将有边的点标记为1 
				r[y]++;//计算入度 
			}
		}
       int sum=topoq();
	   for(int i=0;i<sum;i++){
            printf("%d",topo[i]);
            if(i!=(sum-1)) printf(" ");
            else printf("\n");
	   }
	      
	}
}
