#include<stdio.h>
int main()
{
	int num;
	while(scanf("%d",&num)!=EOF)
	{
		int i,count=0;     //��¼ת���˼���
		for(i=1;i<=num;i++)
		{
			if(num%i==0)    //ת�������� 
			count++;
		} 
		if(count%2==0)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
