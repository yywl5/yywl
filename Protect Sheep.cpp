//����ֻҪ����ÿ�������� �� �� ���Ƿ�����ǣ��������No�������ӡYes���ٰ���"."��λ�ñ��"D"�������
//���Ǳ�������ÿֻ����������ң�������ǣ��϶����ܱ�������Ϊ����ǰ��ŵ��м�û�еط��Ź���ֻҪ��������û���ǣ��Ϳ��Է��ù������ǾͲ���ȥ��������Ŀ�У�û��Ҫ�󹷵�������Ϊ�����������Ծͼ��ˡ�ֻҪ�пյض����Էţ�������ÿֻ����������ҷš�
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
					if(Map[i+1][j]=='W'||Map[i-1][j]=='W'||Map[i][j+1]=='W'||Map[i][j-1]=='W') { //�жϲ�����
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
