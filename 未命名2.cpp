#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
   struct Goods {
  char Goods_ID[30];
  char Goods_type[30];
  char Goods_name[30];
  float Goods_number;
  float Goods_price;
 };
typedef struct Linker {
  struct Goods GOOD;
 struct Linker *pNext;
} LINKER,*next;
typedef struct Linker LINKER;
LINKER *pNEXT;
typedef struct Goods *GOOD;
next create_list(void) {
 int len;
 int i;
 LINKER g;
 next pHead=(next)malloc(sizeof(LINKER));
 if(NULL==pHead) {
  printf("����ʧ�ܣ�������ֹ��\n");
  exit(-2);
 }
 next pTail=pHead;
 pTail->pNext=NULL;
 printf("��������Ҫ���ɵ��������:");
 scanf("%d",&len);
 for(i=0; i<len; i++) {
  printf("�������%d����������:",i+1);
  scanf("%s %s %s %f %f",pNEXT->GOOD.Goods_ID,pNEXT->GOOD.Goods_name,&pNEXT->GOOD.Goods_number,&pNEXT->GOOD.Goods_price);
  next pNew=(next)malloc(sizeof(LINKER));
  if(NULL==pNew) {
   printf("����ʧ�ܣ�������ֹ��\n");
   exit(-1);
  }
   pNew=pNEXT;
  pTail->pNext=pNew;
  pNew->pNext=NULL;
  pTail=pNew;
 }
 return pHead;
}
void traverse_list(next pHead){
 next p=pHead->pNext; 
 
 while(NULL!=p){
  printf("%s %s %s %f %f",pNEXT->GOOD.Goods_ID,pNEXT->GOOD.Goods_number,pNEXT->GOOD.Goods_name,pNEXT->GOOD.Goods_number,pNEXT->GOOD.Goods_price);
  p=p->pNext;
 } 
 printf("\n");
 return;
}
int main(void){
 next pHead = NULL;
 pHead=create_list();
 traverse_list(pHead);  
 return 0;
}
