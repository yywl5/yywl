//C�еĺ����á������롱��һ���������ֽڣ����λ����1�����Կ��������д������һ���ַ����ﺺ�ֵĸ�����
#include<stdio.h>
#include<string.h>
int main()
{
char s[1000];
int cn,i,all;
while(scanf("%d",&cn)!=EOF)
{
getchar();
while(cn)
{
gets(s);
cn--;
all=0;
for(i=0;i<strlen(s);i++)
if(s[i]<0) //���λΪ1(����)����һ�����ֵ�һ��
all++;
printf("%d\n",all/2); //�����������ֽڴ洢�������ٳ���
}	
}
return 0;
}
