#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node{
	int data;//������
	struct Node *pNext;//ָ���� 
}NODE,*PNODE;//NODE�ȼ���struct Node    PNODE�ȼ���struct Node * 
PNODE create_list(void){
	int len;
	int i;
	int val;//������ʱ����û�����Ľ���ֵ 
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(NULL==pHead){
		printf("����ʧ�ܣ�������ֹ��\n");
		exit(-1);
	} 
	PNODE pTail=pHead;
	pTail->pNext=NULL;
	printf("����������Ҫ���ɵ�����ڵ������len=");
	scanf("%d",&len);
	for(i=0;i<len;++i){
		printf("�������%d���ڵ��ֵ��",i+1);
		scanf("%d",&val);
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(NULL==pNew){
			printf("����ʧ�ܣ�������ֹ��\n");
			exit(-1);
		}
		pNew->data=val;
		pTail->pNext=pNew;
		pNew->pNext=NULL;
		pTail=pNew;
	}
	return pHead;
	//�����������ɣ� 
}//һ��Ҫ����һ��ͷ�ڵ㣬����һ���ڵ�����β�ڵ㣬 
//��α���������������a[i]�������� 
void traverse_list(PNODE pHead){
	PNODE p=pHead->pNext;//�������Ϊ�գ���ֻ��һ��ͷ��� 
	
	while(NULL!=p){
		printf("%d ",p->data);
		p=p->pNext;
	} 
	printf("\n");
	return;
}
int main(void){
	PNODE pHead = NULL;//�ȼ��� struct Node *PHead = NULL;
	pHead=create_list();//����һ����ѭ�����������׵�ַ����pHead
	traverse_list(pHead); //������ 
	return 0;
}

