bool insert_list(PNODE pHead,int pos,int val){//在pHead所指向链表的第pos个节点的前面插入一个新的节点，该节点的值为val，并且pos的值从1开始 
	//先求出链表的长度
	int i=0;
	PNODE p=pHead;
	while(NULL!=P&&i<pos-1){
	p=p->pNext;
	++i; 
}
if(i>pos-1||NULL==p)
return false;
PNODE pNew=(PNODE)malloc(sizeof(NODE));
if(NULL==pNew){
	printf("动态分配内存失败\n");
	exit(-1);
}
pNew->data=val;
PNODE q=p->pNext;
p->pNext=pNew;
pNew->pNext=q;
return true;
}
//数据结构是专门研究数据存储的问题
//数据结构即包含数据的存储也包含数据的操作
//算法：狭义：狭义的算法与数据的存储方式密切相关
//广义的算法与数据的存贮方式无关，即泛性思想
//连续存储与非连续存储 数组与链表
//非线性：树与图
//线性结构的运用：栈与队列；
// 
