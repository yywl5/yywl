#include<stdio.h>
void experiment(int *text1,int *text2,int *print) {
	*print=*text1**text2;
	printf("%d\n",*print);
	*print=*text1+*text2;
	printf("%d\n",*print);
	*print=*text1-*text2;
	printf("%d\n",*print);
	
}
int main() {
	int text1,text2,print;
	scanf("%d%d",&text1,&text2);
	experiment(&text1,&text2,&print);
}
