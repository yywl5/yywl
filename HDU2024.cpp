//判断第一个字符不为数字，后面的字符均在数字，大小写英文，下划线范围内即可。 
#include<stdio.h>
#include<string.h>
int main()
{
	int s,len,i,sum;
    char str[100];
    scanf("%d",&s);
	getchar();
    while(s--)
	{
		sum=0;
        gets(str);
        len=strlen(str);
        if(str[0]>='0'&&str[0]<='9')
        printf("no\n");
        else
		{
			for(i=0;i<=len-1;i++)
            if(str[i]>='0'&&str[i]<='9'||str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]=='_')
			{sum++;}
            if(sum==len) {printf("yes\n");}
            else {printf("no\n");}
		}
	}
    return 0;
}
