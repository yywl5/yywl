#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Orders {
	int number;//订单编号
	char Num[9];//商品编号
	int sum;//销售量
	float price;//单价
	float add;//总金额
	struct Orders *next;//指向下一个单元的指针
};
int main () {
	struct Orders head,*point=&head;
	FILE *fil=fopen("order.txt","r");
	if(fil==NULL) {
		printf("order.txt文件缺失，可能无法执行部分功能");
	}

	while(!feof(fil)) {
		if ((point=(Orders*)malloc(sizeof(Orders))) == NULL) {
			printf("\n  --无法分配内存空间！\n");
			fclose(fil);
		}
		fscanf(fil,"%d%s%d%f%f",&point->number,point->Num,&point->sum,&point->price,&point->add);

		point->next=(struct Orders*)malloc(sizeof(Orders));
		point=point->next;

	}
	fclose(fil);
	point=&head;
}
