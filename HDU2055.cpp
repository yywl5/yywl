#include<stdio.h>
//����һ���ж��Ƿ������ַ�Ϊ��д����Сд�����Ϊ��д��ĸ�����ȥ64�����ΪСд��ĸ�����ȼ�ȥ96��Ȼ���ڼ�ȥ��������������� 
int main(){
	int t;
	char English;
	int g; 
	int Number;
    scanf("%d",t);
    getchar();
    while(t--){
    	scanf("%c %d",&English,&Number);
    	if(English<='Z'&&English>='A'){
    		g=English-'A'+1;
		}else if(English<='z'&&English>='a'){
			g='a'-English-1;
		}
		printf("%d\n",g+Number); 
	}
	return 0;
} 
