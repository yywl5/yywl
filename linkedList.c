#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct order_print{
	char order_number[40];
	char commodity_number[40];
	float sell_number;
	float price;
	float sum_price;
};
typedef struct order_prints{
	char order_number[40];
	char commodity_number[40];
	float sell_number;
	float price;
	float sum_price;
	struct order_prints *Pnext;
}NEXT;
struct order_print order[500];
//在链表中删除一个学生s 
int deleteStudent(NEXT **head, NEXT s){
	NEXT *pre=NULL, *p=*head;
	while(p != NULL && p->studentNo != s.studentNo){
		pre = p;
		p = p->next;
	} 
	if(p != NULL){
		if(pre==NULL){ //删除头 
			*head = p->next;
		}
		else
		    pre->next = p->next;
		free(p);
		return 0;  //成功删除 
	}
	return -1;   //未成功删除 
} 
void show_order() {
	FILE *ep;
	int t=0,i,j;
	ep=fopen("order.txt","r");
	if(NULL == (ep = fopen("order.txt", "r"))) {
		printf("error\n");
		exit(1);
	} else {
		printf("读取文件成功!\n");
	}
	char ch;
	getch();
	while((ch=fgetc(ep))!=EOF) {
		if(ch=='\n'){
			t++;
		}
		printf("%-c",ch);
	}
	printf("文件共有%d项",t);
	fclose(ep);
	getch();
	system("cls");
	fclose(ep);

}
void inputStudent(NEXT *p,int i) {
strcpy(p->commodity_number,order[i].commodity_number);
strcpy(p->order_number,order[i].order_number);
p->sell_number=order[i].sell_number;
p->price=order[i].price;
p->sum_price=order[i].sum_price;
}
NEXT *creatLinkedList(int number) {
	NEXT *head, *p, *q;
	int i;
	p=head=(NEXT *)malloc(sizeof(NEXT));
	for(i=0;i<number;i++) {
		p->Pnext = NULL;
		inputStudent(p,i);
		q = (NEXT *)malloc(sizeof(NEXT));
		p->Pnext = q;
		p = p->Pnext;
	}
	return head;
}

void displayStudents(NEXT *s,int number) {
	int i = 0;
	while(s!=NULL&&i<number) { 
	printf("%s %s %.1f %.1f %.1f\n",s->commodity_number,s->order_number,s->sell_number,s->price,s->sum_price);
        s = s->Pnext;
		i++;
	}
}
int main(void) {
	int count;
	show_order();
	int i;
	int j;
	FILE *jp;
	jp=fopen("order.txt","r");
	if((jp=fopen("order.txt","r"))==NULL) {		

		printf("Can not open file\n");

		exit(1);
	} 
	while(!feof(jp)) {
		
		fscanf(jp,"%s %s %f %f %f\n",order[i].commodity_number,&order[i].order_number,&order[i].price,&order[i].sell_number,&order[i].sum_price);
		i++;
	}
	count=i;
	getch();
	for(j=0; j<i; j++){
		printf("%s %s %.1f %.0f %.2f\n",order[j].commodity_number,order[j].order_number,order[j].price,order[j].sell_number,order[j].sum_price);
}
   
	fclose(jp);
	printf("链表结点的个数为：%d\n\n\n",count);
	int *pt=&i;
	NEXT *h = creatLinkedList(*pt);
	displayStudents(h,*pt);
	return 0;
}
