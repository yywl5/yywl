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
    //�ж��Ƿ����ظ����ʵ��ź�
    int f;
    while(gets(a))
    {
        if(strcmp(a,"#")==0)
            break;
        //whileѭ���ڱ���ֵ���ַ���������±�
        k=0;
        //��������
        n=0;
        //��ͬ���ʵ�����
        sum=0;
        //��Ҫ����ַ���a�ĵ�һ��Ԫ��Ϊ�ո�
        if(a[0]>='a'&&a[0]<='z')
            sum++;
        int len=strlen(a);
        for(i=0;i<len;i++)
        {
            //һ�����ʵ���ʼλ�ã���Ҫ���ǵ����������м��ж���ո�
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
