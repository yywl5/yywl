
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
		strrev(str1);//**�����ַ���**//
		if(strcmp(str1,str2)==0)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
	}
	return 0;
}
��������������������������������
��Ȩ����������ΪCSDN������A_Eagle����ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/A_Eagle/article/details/7177825
