
#include<stdio.h>
 
int main()
{
	int i,m,n,t;
	char s;
	scanf("%d",&t);
	getchar();
	while(t --)
	{
		scanf("%c %d",&s,&n);
		getchar();
		if(s >= 'a' && s <= 'z')
			m = -(s - 'a') - 1;
		else
			m = s - 'A' + 1;
		printf("%d\n",m+n);
	}
	return 0;
}
