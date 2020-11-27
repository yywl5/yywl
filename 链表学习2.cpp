#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node{
	int data;//������
	struct Node *pNext;//ָ���� 
}NODE,*PNODE;//NODE�ȼ���struct Node    PNODE�ȼ���struct Node * 
void traverse_list(PNODE PHead);
bool is_empty(PNODE PHead);
int length_list(PNODE);
bool insert_list(PNODE,int,int);
bool delete_list(PNODE,int,int *);
PNODE create_list(void);
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
bool is_empty(PNODE pHead){
	if(NULL==pHead->pNext)
	return true;
	else
	return false;
}
int is_length(PNODE pHead){
	PNODE p=pHead->pNext;
	int len=0;
	while(NULL!=p){
		++len;
		p=p->pNext;
	}
	return len;
}
int main(void){
	int len;
	PNODE pHead = NULL;//�ȼ��� struct Node *PHead = NULL;
	pHead=create_list();//����һ����ѭ�����������׵�ַ����pHead
	traverse_list(pHead); //������
	if(is_empty(pHead))
	printf("����Ϊ�գ�\n");
	else
   printf("������\n"); 
//	len=length_list(pHead);
	printf("����ĳ�����%d\n",len);
	return 0;
}
//����������û���±ꣻ
//���ͣ�����һЩ�����ﵽ��Ч�����ǣ���ͬ�Ĵ�����ʽ��ִ�еĲ�����һ����
//�㷨��������㷨�������ݵĴ�����ʽ�������
//������㷨�������ݵĴ��淽ʽ�޹� 
void sort_list(PNODE pHead){
	int i,j,t;
	PNODE p,q;
	int len=length_list(pHead);
	for(i=0,p=pHead->pNext;i<len-1;++i,p=p->pNext){
		for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext){
			if(p->data>q->data){//�����������еģ�a[i]>a[j] 
				t=p->data;//�����������еģ�t=a[i]; 
				p->data=q->data;//�����������еģ�a[i]=a[j]; 
				q->data=t;//�����������еģ�a[j]=t; 
			}
		}
	}
}
