#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<set>
//�����ж��ַ�����ÿһ����ĸ�Ƿ��з������ϵĿ���.Ȼ��Եõ����޹�����ĸ�����ֵ������к����
//���ʱС��k,��Ȼ����������ַ� 
//ȥ�� 
using namespace std;
char s[550];
int n,k;
char label[550];
char comparing(char a,char b) {
	return a<b;
}
int main() {
	scanf("%d",&n);
	while(n--) {
		set<char> g;
		memset(s,0,sizeof(s));
		memset(label,0,sizeof(label));
		k=0;
		scanf("%s",s);
		getchar();
		int len=strlen(s);
		//printf("%d\n",len);
		for(int i=0; i<len; i++) {
			if(s[i]==s[i+1]&&i!=len-1) {
				i=i+1;
			} else {
				label[k++]=s[i];
			}
		}
		//if(k==0){
		//	printf(" ");
		//}else{
		sort(label,label+k,comparing);
		g.insert(label,label+k);
		set<char>::iterator it;
		 for(it=g.begin();it!=g.end();it++){
		 	printf("%c",*it);
		 }
	//	for(int i=0; i<k; i++) {
	//		printf("%c",label[i]);
	//	}
	//}
		printf("\n");
	}
	return 0;
}


