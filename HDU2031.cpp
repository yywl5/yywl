#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
	stack<int>s;
	int m,r;
	while(~scanf("%d %d",&m,&r))
	{
		int flag=0;
		if(m<0)
		m=-m,flag=1;
		while(m)
		s.push(m%r),m=m/r;
		if(flag)
		printf("-");
		while(!s.empty())
		{
			if(s.top()>=10)
			printf("%c",'A'-10+s.top());
			else
			printf("%d",s.top());
			s.pop();
		}
		printf("\n");
	}
	return 0;
}
