#include<stdio.h>
#include<string.h>
using namespace std;
char st[50][110];
main()
{
	int i,n,j,l1,l2,t=0;
	char c,s;
	while(~scanf("%c",&c)&&c!='@')
	{
		memset(st,' ',sizeof(st));//将二维数组重置为空格 
		scanf("%d",&n);
		s=getchar();
		l1=l2=n-1;
		for(i=0;i<n;i++)
		{
			st[i][l1]=st[i][l2]=c;
			st[i][l2+1]='\0';
			l1--;l2++;
		}
		for(i=0;i<2*n-1;i++)
		st[n-1][i]=c;
		st[n-1][i]='\0';
		if(t==0)
		t=1;
		else
		puts("");
		for(i=0;i<n;i++)
		puts(st[i]);
	}
	return 0;
}
