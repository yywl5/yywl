#include<stdio.h>
#include<math.h>
//ÑùÀı6ÎªÌØÀı 
int n,sum,t;
int array[15000000];
int sign[15000000];
int main() {
	while(scanf("%d",&n)!=EOF) {
		sum=0;
		for(int i=1; i<=n; i++) {
			scanf("%d",&array[i]);
		}
		for(int i=1; i<=n; i++) {
			sign[i]=array[n-i+1];
		}
		for(int i=1;i<=n/2;i++){
			sign[i]=abs(array[i]-sign[i]);
			sum=sum+abs(array[i]-sign[i]);
		} 
		for(int i=1; i<=n; i++) {
			if(i!=n) {
				printf("%d ",sum-sign[i]+1);
			} else {
				printf("%d\n",sum-sign[i]+1);
			}
		}
	}
}
