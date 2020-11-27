#include<stdio.h>
#include<math.h>
#include<string.h>
#define M 1000
int n;
int flag=0;
int x[M];
int countn;
bool Place(int t){
	bool ok=true;
	for(int j=1;j<t;j++){
		if(x[t]==x[j]||t-j==fabs(x[t]-x[j])){
			ok=false;
			break;
		}
	}
	return ok;
}
void Backtrack(int t){
	if(t>n&&flag==0){
		countn++;
		flag=1;
		for(int i=1;i<=n;i++){
			printf("%d",x[i]);
			printf(" ");
		}
		printf("\n");
		printf("-------------\n");
	}else{
		for(int i=1;i<=n;i++){
			x[t]=i;
			if(Place(t)){
				Backtrack(t+1);
			}
		}
	}
}

int main(){
	while(scanf("%d",&n)!=EOF){
		flag=0;
		countn=0;
		Backtrack(1);
	}
	return 0;
}
