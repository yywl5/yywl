bool insert_list(PNODE pHead,int pos,int val){//��pHead��ָ������ĵ�pos���ڵ��ǰ�����һ���µĽڵ㣬�ýڵ��ֵΪval������pos��ֵ��1��ʼ 
	//���������ĳ���
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
	printf("��̬�����ڴ�ʧ��\n");
	exit(-1);
}
pNew->data=val;
PNODE q=p->pNext;
p->pNext=pNew;
pNew->pNext=q;
return true;
}
//���ݽṹ��ר���о����ݴ洢������
//���ݽṹ���������ݵĴ洢Ҳ�������ݵĲ���
//�㷨�����壺������㷨�����ݵĴ洢��ʽ�������
//������㷨�����ݵĴ�����ʽ�޹أ�������˼��
//�����洢��������洢 ����������
//�����ԣ�����ͼ
//���Խṹ�����ã�ջ����У�
// 
