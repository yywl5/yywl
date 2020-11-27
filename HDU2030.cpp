//C中的汉字用“机内码”，一个汉字两字节，最高位都是1，所以可以用下列代码求得一个字符串里汉字的个数：
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
if(s[i]<0) //最高位为1(负数)的是一个汉字的一半
all++;
printf("%d\n",all/2); //汉字以两个字节存储，所以再除二
}	
}
return 0;
}
