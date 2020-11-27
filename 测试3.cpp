#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Goods {
	char Goods_ID[30];
	char Goods_type[30];
	char Goods_name[30];
	float Goods_number;
	float Goods_price;
};
typedef struct Goods GOOD;

int *num;



void input(GOOD *point,int number,int i) {
	printf("|----------------|\n");
	printf(" 输入商品数量:");
	scanf("%d",&number);
	printf("|----------------|\n");
	for(i=0; i<number; i++) {
		printf(" 第%d件商品概况\n",i+1);
		printf(" 商品编号:");
		scanf("%s",(point+i)->Goods_ID);
		printf(" 商品类别编号:");
		scanf("%s",(point+i)->Goods_type);
		printf(" 商品名称:");
		scanf("%s",(point+i)->Goods_name);
		printf(" 库存数量:");
		scanf("%f",&(point+i)->Goods_number);
		printf(" 单价:");
		scanf("%f",&(point+i)->Goods_price);
		printf("|----------------|\n");
	}
	num=&number;
}


void sort(GOOD *point,int number,int i,int j) {
	struct Goods t;
	for(i=0; i<number; i++) {
		for(j=0; j<number-i-1; j++) {
			if(point[j].Goods_number<point[j+1].Goods_number) {
				t=point[j];
				point[j]=point[j+1];
				point[j+1]=t;
			}
		}
	}
}


void output(GOOD *point,int number,int i) {
	printf("商品概况\n");
	printf("|----------------------------------------------------------------------------------|\t\t\n");
	printf("|\t商品编号\t商品类别编号\t商品名称\t库存数量\t单价\t   |\n");
	for(i=0; i<number; i++) {
		printf("| \t%s\t\t%s\t\t%s\t\t%.0f\t\t%.2f\t   |",(point+i)->Goods_ID,(point+i)->Goods_type,(point+i)->Goods_name,(point+i)->Goods_number,(point+i)->Goods_price);
		printf("\n");
	}
	printf("|----------------------------------------------------------------------------------|\t\t\n");
}


int main() {
	int number,i,j;

	GOOD *point=(GOOD *)calloc(number,sizeof(GOOD));

	input(point,number,i);

	sort(point,*num,i,j);

	output(point,*num,i);

	for(i=0; i<number; i++) {
		for(i=0; i<number; i++)
			free(point);
	}
	system("pause");
	return 0;
}
