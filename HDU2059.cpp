#include <iostream>
#include <cstring>
using namespace std;
 
int L, N, C, T;
int VR, VT1, VT2;
int p[102];
double dp[105];
void DP()
{
	double min, ans;
	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	for(int i = 1; i < N + 2; i++)
	{
		min = 10000000000;
		for(int j = 0; j < i; j++)
		{
			int len = p[i] - p[j];    //判断两个点之间的距离
			if(len > C)               //距离大于电动车的最大距离，一段距离需要脚踩
			{
				ans = 1.0 * C / VT1 + (len - C + 0.0) / VT2;
			}
			else                      //全程骑车。
			{
				ans = 1.0 * len / VT1;
			}
			ans += dp[j];             //加上前面的时间
			if(j)                     //过充电站，加上充电时间
				ans += T;
			if(min > ans)             //找最小时间
				min = ans;
		}
		dp[i] = min;
	}
}
 
int main()
{
	while(scanf("%d", &L) != EOF)      //输入
	{
		scanf("%d%d%d", &N, &C, &T);
		scanf("%d%d%d", &VR, &VT1, &VT2);
		for(int i = 1; i <= N; i++)
			scanf("%d", &p[i]);
		p[0] = 0; p[N + 1] = L;     //起点距离为0，终点距离为 L
		DP();
		if(1.0 * L / VR < dp[N + 1])  //判断时间与兔子的时间的大小
			printf("Good job,rabbit!\n");
		else
			printf("What a pity rabbit!\n");
	}
	return 0;
}
