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
	printf("输入商品数量:");
	scanf("%d",&number);
	printf("商品编号,商品类别编号,商品名称,库存数量,单价\n");
	for(i=1;i<=number;i++){
	    scanf("%s%f%s%f%f\n",&GOODS.Goods_ID[20],&GOODS.Goods_type,GOODS.Goods_name[20],&GOODS.Goods_number,GOODS.Goods_price);
	}
}
int main(){
	int number;
	input(number);
} 
