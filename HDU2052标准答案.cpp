#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,m,n;
	char a[110],b[110];
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		
		for(i=1;i<=n+2;i++)
		{
			if(i==1||i==n+2)
			{
				printf("+");
				for(j=2;j<m+2;j++)
				printf("-");
				printf("+\n"); 
			}
			else
			{
				printf("|");
				for(j=2;j<m+2;j++)
				printf(" ");
				printf("|\n");
			}
		}
		printf("\n");
	}
	return 0;
}
