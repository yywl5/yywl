#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
double A[55][9];
double avg[9];
double sum;
int main()
{
    int n,m,i,j,cnt,flag;
    while(scanf("%d%d",&n,&m)!=EOF&&n&&m)
    {
        cnt=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            scanf("%lf",&A[i][j]);
        for(i=1;i<=n;i++)
        {
            sum=0.0;
            for(j=1;j<=m;j++)
                sum=sum+A[i][j];
            sum=sum/(m*1.0);
            printf("%.2lf",sum);
           if(i!=n)printf(" ");
           else printf("\n");
        }//��Ҫ���������λ�ù�ϵ
        for(j=1;j<=m;j++){
                sum=0.0;
            for(i=1;i<=n;i++)
            sum=sum+A[i][j];
        sum=sum/(n*1.0);
        printf("%.2lf",sum);
        if(j!=m)printf(" ");
        else printf("\n");
        avg[j]=sum;
        }

        for(i=1;i<=n;i++){
                flag=1;
        for(j=1;j<=m;j++){
            if(A[i][j]<avg[j])//��������Ƴɼ������ڵ���ƽ���ɼ���ѧ������,�����С�ںŶ�����С�ڵ��ں�
            //��Ϊ��仰����ʮ����
            {
                flag=0;
                break;
            }
        }
        if(flag==1)cnt++;
        }
        printf("%d\n\n",cnt);
//ע�������ĿҪ������Ҫ��������ո�
    }
    return 0;
}
��������������������������������
��Ȩ����������ΪCSDN����������֮�ء���ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/m0_37051465/article/details/81636271
