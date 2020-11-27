#include <iostream>
#define MA 1000
#define MAXUINT 0x3f3f3f3f

using namespace std;
unsigned int t[MA]; 
unsigned int m[MA]; 
unsigned int minTime = MAXUINT; 
unsigned int n, k;

void TraceBack(int task) {
	if (task > n) {
		//ͳ�����л���������ʱ����
		int u = 0;
		for (int i = 1; i <= k; i++) {
			if (m[i] > u)
				u = m[i];
		}

		if (u < minTime)
			minTime = u;
		return;
	}
	for (int i = 1; i <= k; i++) {
		//�����i����
		m[i] += t[task];
		TraceBack(task + 1);
		//ȡ��
		m[i] -= t[task];
	}
}

int main() {
	while(scanf("%d %d",&n,&k)!=EOF) {
		for (int i = 1; i <= n; i++)
			cin >> t[i];
		for (int i = 1; i <= k; i++)
			m[i] = 0;
		TraceBack(1);
		cout << minTime << endl;
	}
	return 0;
}
