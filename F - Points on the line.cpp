#include<stdio.h>
#include<algorithm>
using namespace std;
int  n,d;
int axis[200];
int sum1;
int sum2;
int t1,t2;
int main() {
	while(scanf("%d %d",&n,&d)!=EOF) {
		sum1=0;
		sum2=0;
		for(int i=0; i<n; i++) {
			scanf("%d",&axis[i]);
		}
		sort(axis,axis+n);
		
		if((axis[n-1]-axis[0])<=d) {
			printf("0\n");
			continue;
		}
		for(int i=n-1; i>=0; i--) {
			if(axis[i]-axis[0]<=d) {
				break;
			} 
			++sum1;
		}
		for(int i=0; i<n; i++) {
			if(axis[n-1]-axis[i]<=d) {
				break;
			}
			++sum2;
		}
		if(sum2>sum1) {
			printf("%d\n",sum1);
		} else {
			printf("%d\n",sum2);
		}
	}
}
