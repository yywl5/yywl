
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[1001],str2[1001];
	int s,i,len;
	scanf("%d",&s);
	getchar();
	while(s--)
	{
		scanf("%s",str1);
		strcpy(str2,str1);
		strrev(str1);//**倒置字符串**//
		if(strcmp(str1,str2)==0)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
	}
	return 0;
}
————————————————
版权声明：本文为CSDN博主「A_Eagle」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/A_Eagle/article/details/7177825
