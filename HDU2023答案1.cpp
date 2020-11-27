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
        }//需要理清数组的位置关系
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
            if(A[i][j]<avg[j])//并输出各科成绩均大于等于平均成绩的学生数量,因此是小于号而不是小于等于号
            //因为这句话卡了十几发
            {
                flag=0;
                break;
            }
        }
        if(flag==1)cnt++;
        }
        printf("%d\n\n",cnt);
//注意根据题目要求这里要输出两个空格
    }
    return 0;
}
————————————————
版权声明：本文为CSDN博主「星落之地」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/m0_37051465/article/details/81636271
