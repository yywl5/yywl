#include<stdio.h>
int main() {
	int n,i,j,t,b[100],e[100],count;
	while(scanf("%d",&n)!=EOF&&n!=0) {
		for(i=0; i<n; i++)
			scanf("%d%d",&b[i],&e[i]);
		for(i=0; i<n-1; i++) {
			for(j=i+1; j<n; j++) {
				if(e[i]>e[j]) {
					t=b[i],b[i]=b[j];b[j]=t;
					t=e[i],e[i]=e[j];e[j]=t;
				}
			}
		}
		t=e[0];
		count =1;
		for(i=1; i<n; i++) {
			if(t<=b[i]) {
				count++;
				t=e[i];
			}
		}
		printf("%d\n",count);
	}

}
