#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int f[55];
    f[1]=1;
    f[2]=2;
    for(int i=3;i<55;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        printf("%lld\n",f[t]);
    }
}
