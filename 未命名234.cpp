#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*****************************
	链表节点结构体
****************************/
typedef struct Goods_node { //定义用来存储的结构体，//链表节点结构体
	char Goods_ID[40];//数据域
	char Goods_type[40];
	char Goods_name[40];
	float Goods_number;
	float Goods_price;
	struct Goods_node *next;//指针域
} node;
/*****************************
向控制台输出链表的各个节点值
****************************/
void dispaly(node *head) {
	node *p;
	p = head;
	if (!p) { //如果head指针为空说明链表为空
		printf("\n链表为空！\n\n");
	} else {
		printf("\n链表的各个节点的值为：\n");
		while (p!=NULL) { //循环将各个节点值输出
			p = p->next;//第一是垃圾值   跳过
			printf("%s  %s	%s	%.0f	%.2f\n",p->Goods_ID, p->Goods_type, p->Goods_name, p->Goods_number, p->Goods_price);//打印

		}
	}

}



/******************************************
找到要插入的上一个节点位置，实际就是连续插入在尾部
*********************************************/
node *find(node *head,int i) {
	int j = 1;
	node *p = head;

	if (i < 1) { //节点从第一个开始   为0说明没有节点 链表为空  返回NULL
		printf("\n链表长度要大于零\n\n");
		return NULL;
	}

	while (p&&i!=j) { //循环判断直到找到目标节点
		p = p->next;
		j++;
	}

	return p;//返回找到的目标节点
}



/******************************************
插入节点，找到要插入的位置后插入带数据的节点
*********************************************/
node *insert(node *head, char Goods_ID[40],char Goods_type[40],char Goods_name[40],float Goods_number,float Goods_price,int i) {
	node *p, *q;
	q = find(head, i);

	if (!q&&i!=0) { //对find的结果进行判断，同时对i输入的值判断
		printf("找不到第%d个节点，无法插入数据\n",i);
	} else {
		p = (node*)malloc(sizeof(node));//实例化节点，分配空间
		strcpy(p->Goods_ID,Goods_ID);
		strcpy(p->Goods_name,Goods_name);
		strcpy(p->Goods_type,Goods_type);
		p->Goods_number = Goods_number;
		p->Goods_price = Goods_price;
		if (i == 0) { //如果是空链表   就把这个节点作为头指针指向的节点
			p->next = head;
			head = p;
		} else { //如果不是空链表就正常代换指针域
			p->next = q->next;
			q->next = p;
		}
	}
	return head;//返回修改后的链表头指针
}

/***********主函数*************/
int main() {
	//链表初始化
	node *head,*s;
	head = (node*)malloc(sizeof(node)); //例化

	//文件读取
	FILE *fp;
	int i = 0;
	int j = 0;
	struct Goods_nodes { //定义用来存储的结构体
		char Goods_ID[40];
		char Goods_type[40];
		char Goods_name[40];
		float Goods_number;
		float Goods_price;
	};
	struct Goods_nodes GOOD[500];
	fp = fopen("goods.txt","r");//打开文件
	if (fp == NULL) { //判断是否正常打开文件
		printf("读取文件失败\n\n");
		exit(0);
	} else {
		printf("读取文件成功\n\n");
	}
	for (i = 0; i < 33; i++) { //按照文件里的数据格式  循环的读入每一行的数据，并存入相应的数组缓存中
		fscanf(fp,"%[^ ]  %[^ ]	%[^ ]	%f	%f\n",GOOD[i].Goods_ID,&GOOD[i].Goods_type,&GOOD[i].Goods_name,&GOOD[i].Goods_number,&GOOD[i].Goods_price);
	}
	//ch= fgetc(fp);

	fclose(fp);//操作文件结束必须关闭文件指针

	for (j = 0; j <33; j++) { //将数组里的数据打印出来看看是否正确
		printf("%s  %s	%s	%.0f	%.2f\n", GOOD[j].Goods_ID,&GOOD[j].Goods_type,&GOOD[j].Goods_name,GOOD[j].Goods_number,GOOD[j].Goods_price);
	}
	int m;

	for ( m = 0; m <33; m++) { //循环调用链表插入函数，将数组值写入链表中
		s = insert(head, GOOD[m].Goods_ID,GOOD[m].Goods_type,GOOD[m].Goods_name,GOOD[m].Goods_number,GOOD[m].Goods_price,m);
	}

	dispaly(s);//将链表的各个节点值打印出来
	return 0;
}
