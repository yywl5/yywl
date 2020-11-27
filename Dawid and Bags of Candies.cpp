#include<stdio.h>
#include<algorithm>
#include<string.h>
//2-2ºÍ1-3
using namespace std;
int array[4];
int a1,a2,a3,a4;
int main() {
	while(scanf("%d %d %d %d",&a1,&a2,&a3,&a4)!=EOF) {
		array[0]=a1;
		array[1]=a2;
		array[2]=a3;
		array[3]=a4;
		sort(array,array+4);
		if((array[3]+array[0])==(array[2]+array[1])) {
			printf("YES\n");
		} else if(array[3]==(array[0]+array[2]+array[1])) {
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
