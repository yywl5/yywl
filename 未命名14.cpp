#include<iostream>
#include<string.h>
using namespace std;
int main() {
		int n;
	__int32 list[200000];
	while(scanf("%d",&n)!=EOF) {
			int first=1;//λ����ʼΪһ��
	list[0]=1;
	int number=0;//��λ��ʼΪ0��
		for(int i=2; i<=n; i++) { //��1�ɵ�n
			number=0;
			for (int j=0; j<first; j++) { //ÿһλ��i
				number=list[j]*i+number;
				list[j]=number%10;        //ȡ��λ
				number=number/10;         //��ȡ��λ��
			}
			while(number) { //���н�λ
				list[first]=number%10;
				number=number/10;
				first++;
			}
		}
		for(int i=first-1; i>=0; i--) { //�����������c
			printf("%d",list[i]);
		}
		printf("\n");
	}
	return 0;
}
