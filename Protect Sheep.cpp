//我们只要考虑每个绵羊上 下 左 右是否存在狼，是则必是No，否则打印Yes，再把是"."的位置变成"D"再输出。
//就是暴力搜索每只羊的上下左右，如果有狼，肯定不能保护羊，因为羊和狼挨着的中间没有地方放狗，只要上下左右没有狼，就可以放置狗狗，狼就不能去攻击。题目中，没有要求狗的数量，为任意数，所以就简单了。只要有空地都可以放，我是在每只羊的上下左右放。
#include<stdio.h>
#include<string.h>
#define r 600
#define c 600
char Map[r][c];
int R,C;
int flag;
int main() {
	while(scanf("%d %d",&R,&C)!=EOF) {
		getchar();
		memset(Map,0,sizeof(Map));
		flag=0;
		for(int i=1; i<=R; i++) {
			for(int j=1; j<=C; j++) {
				scanf("%c",&Map[i][j]);
			}
				getchar();
		}
		for(int i=1; i<=R; i++) {
			for(int j=1; j<=C; j++) {
				if(Map[i][j]=='S'&&i<=R&&i>=1&&j<=C&&j>=1) {
					if(Map[i+1][j]=='W'||Map[i-1][j]=='W'||Map[i][j+1]=='W'||Map[i][j-1]=='W') { //判断不成立
						flag=1;
					}
				}
			}
		}
		if(flag==1) {
			printf("No\n");
		} else {
			printf("Yes\n");
			for(int i=1; i<=R; i++) {
				for(int j=1; j<=C; j++) {
					if(Map[i][j]=='.') {
						printf("D");
					}else{
					printf("%c",Map[i][j]);
					}
				}
				printf("\n");
			}
		}
	}
}
