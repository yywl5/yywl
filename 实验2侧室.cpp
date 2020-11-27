#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Goods{
	int Goods_ID;
	int Goods_type;
	char Goods_name[50];
	int Goods_number;
	int Goods_price;
};
typedef struct Goods GOOD;
 
void input(GOOD *point,int number,int i);
void sort(GOOD *point,int number,int i,int j);
void output(GOOD *point,int number,int i);
void input(GOOD *point,int number,int i){
	printf("输入商品数量:");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		printf("第%d件商品概况\n",i);
		printf("商品编号:");
		scanf("%d",&(point+i)->Goods_ID);
		printf("商品类别编号:");
		scanf("%d",&(point+i)->Goods_type);
		printf("商品名称:");
		scanf("%s",(point+i)->Goods_name);
		printf("库存数量:");
		scanf("%d",&(point+i)->Goods_number);
		printf("单价:");
		scanf("%d",&(point+i)->Goods_price);
		printf("\n");
	}
}
void sort(GOOD *point,int number,int i,int j){
	struct Goods t;
	for(i=0;i<number;i++){
		for(j=0;j<number-i;j++){
			if(point[j].Goods_number>point[j+1].Goods_number){
				t=point[j+1];
				point[j+1]=point[j];
				point[j]=t;
			}
		}
	}
}
void output(GOOD *point,int number,int i){
		printf("商品概况\n");
		printf("商品编号     商品类别编号     商品名称     库存数量     单价\n"); 
	for(i=0;i<number;i++){
        printf("%d     %d         %s           %d           %d",point->Goods_ID,(point+i)->Goods_type,(point+i)->Goods_name,(point+i)->Goods_number,(point+i)->Goods_price);
		printf("\n");
	}
}
int main(){
	int number,i,j;
	GOOD *point=(GOOD *)calloc(number,sizeof(GOOD));
	input(point,number,i);
	sort(point,number,i,j);
    output(point,number,i);
    free(point);
} 

