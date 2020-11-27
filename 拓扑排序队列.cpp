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
	for(int i=1;i<=n;i++)//���������Ϊ0�ĵ������ 
	{
		if(r[i]==0)
		{
			q.push(i);
			r[i]--;//��ֹ������� 
		}
	}
	while(!q.empty())
	{
		int u=q.front();//�����е�һ��ȡ�� 
		q.pop();//��ȡ���ĵ�Ӷ���ɾ�� 
		topo[cnt++]=u;//����������� 
		for(int i=1;i<=n;i++)
		{
			if(nap[u][i])
			{
				r[i]--;//���� u��������ȼ��� 
				if(!r[i]) q.push(i);//Ϊ0��� 
			}
		}
	}
	return cnt;
}

int main()
{
	int x,y;
	memset(r,0,sizeof r);//��ʼ��Ϊ0����ȡ��� 
	memset(nap,0,sizeof nap);//��ʼ��Ϊ0����ȡͼ 
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=1;i<=m;i++){
			scanf("%d%d",&x,&y);//����� 
			if(!nap[x][y])
			{
				nap[x][y]=1;//���бߵĵ���Ϊ1 
				r[y]++;//������� 
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
