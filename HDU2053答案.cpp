#include<stdio.h>
int main()
{
	int num;
	while(scanf("%d",&num)!=EOF)
	{
		int i,count=0;     //记录转换了几次
		for(i=1;i<=num;i++)
		{
			if(num%i==0)    //转换的条件 
			count++;
		} 
		if(count%2==0)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
