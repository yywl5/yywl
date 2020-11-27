#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*****************************
	����ڵ�ṹ��
****************************/
typedef struct Goods_node { //���������洢�Ľṹ�壬//����ڵ�ṹ��
	char Goods_ID[40];//������
	char Goods_type[40];
	char Goods_name[40];
	float Goods_number;
	float Goods_price;
	struct Goods_node *next;//ָ����
} node;
/*****************************
�����̨�������ĸ����ڵ�ֵ
****************************/
void dispaly(node *head) {
	node *p;
	p = head;
	if (!p) { //���headָ��Ϊ��˵������Ϊ��
		printf("\n����Ϊ�գ�\n\n");
	} else {
		printf("\n����ĸ����ڵ��ֵΪ��\n");
		while (p!=NULL) { //ѭ���������ڵ�ֵ���
			p = p->next;//��һ������ֵ   ����
			printf("%s  %s	%s	%.0f	%.2f\n",p->Goods_ID, p->Goods_type, p->Goods_name, p->Goods_number, p->Goods_price);//��ӡ

		}
	}

}



/******************************************
�ҵ�Ҫ�������һ���ڵ�λ�ã�ʵ�ʾ�������������β��
*********************************************/
node *find(node *head,int i) {
	int j = 1;
	node *p = head;

	if (i < 1) { //�ڵ�ӵ�һ����ʼ   Ϊ0˵��û�нڵ� ����Ϊ��  ����NULL
		printf("\n������Ҫ������\n\n");
		return NULL;
	}

	while (p&&i!=j) { //ѭ���ж�ֱ���ҵ�Ŀ��ڵ�
		p = p->next;
		j++;
	}

	return p;//�����ҵ���Ŀ��ڵ�
}



/******************************************
����ڵ㣬�ҵ�Ҫ�����λ�ú��������ݵĽڵ�
*********************************************/
node *insert(node *head, char Goods_ID[40],char Goods_type[40],char Goods_name[40],float Goods_number,float Goods_price,int i) {
	node *p, *q;
	q = find(head, i);

	if (!q&&i!=0) { //��find�Ľ�������жϣ�ͬʱ��i�����ֵ�ж�
		printf("�Ҳ�����%d���ڵ㣬�޷���������\n",i);
	} else {
		p = (node*)malloc(sizeof(node));//ʵ�����ڵ㣬����ռ�
		strcpy(p->Goods_ID,Goods_ID);
		strcpy(p->Goods_name,Goods_name);
		strcpy(p->Goods_type,Goods_type);
		p->Goods_number = Goods_number;
		p->Goods_price = Goods_price;
		if (i == 0) { //����ǿ�����   �Ͱ�����ڵ���Ϊͷָ��ָ��Ľڵ�
			p->next = head;
			head = p;
		} else { //������ǿ��������������ָ����
			p->next = q->next;
			q->next = p;
		}
	}
	return head;//�����޸ĺ������ͷָ��
}

/***********������*************/
int main() {
	//�����ʼ��
	node *head,*s;
	head = (node*)malloc(sizeof(node)); //����

	//�ļ���ȡ
	FILE *fp;
	int i = 0;
	int j = 0;
	struct Goods_nodes { //���������洢�Ľṹ��
		char Goods_ID[40];
		char Goods_type[40];
		char Goods_name[40];
		float Goods_number;
		float Goods_price;
	};
	struct Goods_nodes GOOD[500];
	fp = fopen("goods.txt","r");//���ļ�
	if (fp == NULL) { //�ж��Ƿ��������ļ�
		printf("��ȡ�ļ�ʧ��\n\n");
		exit(0);
	} else {
		printf("��ȡ�ļ��ɹ�\n\n");
	}
	for (i = 0; i < 33; i++) { //�����ļ�������ݸ�ʽ  ѭ���Ķ���ÿһ�е����ݣ���������Ӧ�����黺����
		fscanf(fp,"%[^ ]  %[^ ]	%[^ ]	%f	%f\n",GOOD[i].Goods_ID,&GOOD[i].Goods_type,&GOOD[i].Goods_name,&GOOD[i].Goods_number,&GOOD[i].Goods_price);
	}
	//ch= fgetc(fp);

	fclose(fp);//�����ļ���������ر��ļ�ָ��

	for (j = 0; j <33; j++) { //������������ݴ�ӡ���������Ƿ���ȷ
		printf("%s  %s	%s	%.0f	%.2f\n", GOOD[j].Goods_ID,&GOOD[j].Goods_type,&GOOD[j].Goods_name,GOOD[j].Goods_number,GOOD[j].Goods_price);
	}
	int m;

	for ( m = 0; m <33; m++) { //ѭ������������뺯����������ֵд��������
		s = insert(head, GOOD[m].Goods_ID,GOOD[m].Goods_type,GOOD[m].Goods_name,GOOD[m].Goods_number,GOOD[m].Goods_price,m);
	}

	dispaly(s);//������ĸ����ڵ�ֵ��ӡ����
	return 0;
}
