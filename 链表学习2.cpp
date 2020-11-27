#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Node{
	int data;//数据域；
	struct Node *pNext;//指针域 
}NODE,*PNODE;//NODE等价于struct Node    PNODE等价于struct Node * 
void traverse_list(PNODE PHead);
bool is_empty(PNODE PHead);
int length_list(PNODE);
bool insert_list(PNODE,int,int);
bool delete_list(PNODE,int,int *);
PNODE create_list(void);
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
	PNODE pHead = NULL;//等价于 struct Node *PHead = NULL;
	pHead=create_list();//创建一个非循环单链表；将首地址赋给pHead
	traverse_list(pHead); //遍历；
	if(is_empty(pHead))
	printf("链表为空！\n");
	else
   printf("链表不空\n"); 
//	len=length_list(pHead);
	printf("链表的长度是%d\n",len);
	return 0;
}
//链表不连续便没有下标；
//泛型：利用一些技术达到的效果就是：不同的存数方式，执行的操作是一样的
//算法：狭义的算法是与数据的存数方式密切相关
//广义的算法是与数据的储存方式无关 
void sort_list(PNODE pHead){
	int i,j,t;
	PNODE p,q;
	int len=length_list(pHead);
	for(i=0,p=pHead->pNext;i<len-1;++i,p=p->pNext){
		for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext){
			if(p->data>q->data){//类似于数组中的：a[i]>a[j] 
				t=p->data;//类似于数组中的：t=a[i]; 
				p->data=q->data;//类似于数组中的：a[i]=a[j]; 
				q->data=t;//类似于数组中的：a[j]=t; 
			}
		}
	}
}
