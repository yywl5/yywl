#include<stdio.h> 
#include<string.h>
using namespace std;
int main(){
	int i,j;
	char Map[200][200];
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		memset(Map,' ',sizeof(Map));
		Map[1][1]='+';
		Map[2*m][1]='+';
		Map[2*m][n+2]='+';
		Map[1][n+2]='+';
		for(i=2;i<2*m;i++){
			Map[i][1]='|';
			Map[i][n+2]='|';
		} 
		for(i=2;i<n+2;i++){
			Map[1][i]='-';
			Map[2*m][i]='-';
		}
		for(i=1;i<=2*m;i++){
			for(j=1;j<=n+2;j++){
				printf("%c",Map[i][j]);
				printf(" ");
			}
			printf("\n");
			printf("\n");
		}
		printf("\n");
	}
	return 0; 
}
