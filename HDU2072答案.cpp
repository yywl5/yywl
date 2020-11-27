#include <stdio.h>
#include <string.h>
typedef struct
{
    char str[21];
}arr;
arr x[1001];
char a[1001];
int main()
{
    int i,j,k,m;
    int n;
    int sum;
    //判断是否是重复单词的信号
    int f;
    while(gets(a))
    {
        if(strcmp(a,"#")==0)
            break;
        //while循环内被赋值的字符串数组的下标
        k=0;
        //单词总数
        n=0;
        //不同单词的总数
        sum=0;
        //需要提防字符串a的第一个元素为空格
        if(a[0]>='a'&&a[0]<='z')
            sum++;
        int len=strlen(a);
        for(i=0;i<len;i++)
        {
            //一个单词的起始位置（需要考虑到两个单词中间有多个空格）
            if(i==0||(a[i-1]==' '&&a[i]!=' '))
            {
                j=i;
                while(1)
                {
                    x[n].str[k]=a[j];
                    j++;
                    k++;
                    if(a[j]==' '||j==len)
                    {
                        x[n].str[k]='\0';
                        k=0;
                        n++;
                        break;
                    }
                }
                if(i>0)
                {
                    f=0;
                    for(m=0;m<n-1;m++)
                    {
                        if(strcmp(x[n-1].str,x[m].str)==0)
                        {
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                        sum++;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
