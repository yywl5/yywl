#include<stdio.h>
#include<string.h>
struct Goods {
	char Goods_ID[20];
	double Goods_type[20];
	char Goods_name[20];
	double Goods_number;
	double Goods_price;
}GOODS;
void input(int number);
void input(int number){
	int i;
	printf("������Ʒ����:");
	scanf("%d",&number);
	printf("��Ʒ���,��Ʒ�����,��Ʒ����,�������,����\n");
	for(i=1;i<=number;i++){
	    scanf("%s%f%s%f%f\n",&GOODS.Goods_ID[20],&GOODS.Goods_type,GOODS.Goods_name[20],&GOODS.Goods_number,GOODS.Goods_price);
	}
}
int main(){
	int number;
	input(number);
} 
