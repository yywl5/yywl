#include<stdio.h>
#include<string.h>
using namespace std;
int main(void){
	int n,m,i,j;
    char area[75][75];
	while(scanf("%d%d",&n,&m)!=EOF){//n¿í¶È£¬m¸ß¶È 
	memset(area,' ',sizeof(area));
	getchar();puts(" ");
		area[m][1]='+';
		area[1][1]='+';
		for(i=1;i<n;i++){
			area[1][i]='-';
			area[m][i]='-';
		}
		for(j=1;j<m-1;j++){
			area[j][1]='|';
			area[j][n-1]='|';
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				printf("%c",area[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
} 
