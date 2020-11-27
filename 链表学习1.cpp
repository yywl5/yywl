#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node{
	int data;//数据域；
	struct Node *pNext;//指针域 
}NODE,*PNODE;//NODE等价于struct Node    PNODE等价于struct Node * 
PNODE create_list(void){
	int len;
	int i;
	int val;//用来临时存放用户输入的结点的值 
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(NULL==pHead){
		printf("分配失败，程序终止！\n");
		exit(-1);
	} 
	PNODE pTail=pHead;
	pTail->pNext=NULL;
	printf("请输入您需要生成的链表节点个数：len=");
	scanf("%d",&len);
	for(i=0;i<len;++i){
		printf("请输入第%d个节点的值：",i+1);
		scanf("%d",&val);
		PNODE pNew=(PNODE)malloc(sizeof(NODE));
		if(NULL==pNew){
			printf("分配失败，程序终止！\n");
			exit(-1);
		}
		pNew->data=val;
		pTail->pNext=pNew;
		pNew->pNext=NULL;
		pTail=pNew;
	}
	return pHead;
	//大致听懂即可； 
}//一定要生成一个头节点，再令一个节点生成尾节点， 
//如何遍历？不能用数组a[i]来遍历； 
void traverse_list(PNODE pHead){
	PNODE p=pHead->pNext;//如果链表为空，则只有一个头结点 
	
	while(NULL!=p){
		printf("%d ",p->data);
		p=p->pNext;
	} 
	printf("\n");
	return;
}
int main(void){
	PNODE pHead = NULL;//等价于 struct Node *PHead = NULL;
	pHead=create_list();//创建一个非循环单链表；将首地址赋给pHead
	traverse_list(pHead); //遍历； 
	return 0;
}

