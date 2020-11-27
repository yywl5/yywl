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
			int len = p[i] - p[j];    //�ж�������֮��ľ���
			if(len > C)               //������ڵ綯���������룬һ�ξ�����Ҫ�Ų�
			{
				ans = 1.0 * C / VT1 + (len - C + 0.0) / VT2;
			}
			else                      //ȫ���ﳵ��
			{
				ans = 1.0 * len / VT1;
			}
			ans += dp[j];             //����ǰ���ʱ��
			if(j)                     //�����վ�����ϳ��ʱ��
				ans += T;
			if(min > ans)             //����Сʱ��
				min = ans;
		}
		dp[i] = min;
	}
}
 
int main()
{
	while(scanf("%d", &L) != EOF)      //����
	{
		scanf("%d%d%d", &N, &C, &T);
		scanf("%d%d%d", &VR, &VT1, &VT2);
		for(int i = 1; i <= N; i++)
			scanf("%d", &p[i]);
		p[0] = 0; p[N + 1] = L;     //������Ϊ0���յ����Ϊ L
		DP();
		if(1.0 * L / VR < dp[N + 1])  //�ж�ʱ�������ӵ�ʱ��Ĵ�С
			printf("Good job,rabbit!\n");
		else
			printf("What a pity rabbit!\n");
	}
	return 0;
}
