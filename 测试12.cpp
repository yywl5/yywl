#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct commdity {
	int num;
	char name[15];
	double price;
	double count;
	double total;
} commdity;
struct commdity list[50];
void menu();
void time();
void time(){
	time_t timep;
    struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    printf("%d-",1900+p->tm_year);      /*��ȡ��ǰ���,��1900��ʼ������Ҫ��1900*/
    printf("%d-",1+p->tm_mon);          /*��ȡ��ǰ�·�,��Χ��0-11,����Ҫ��1*/
    printf("%d ",p->tm_mday);           /*��ȡ��ǰ�·�����,��Χ��1-31*/
    printf("%d:",8+p->tm_hour);         /*��ȡ��ǰʱ,�����ȡ������ʱ��,�պ����˸�Сʱ*/
    printf("%d:",p->tm_min);            /*��ȡ��ǰ��*/
    printf("%d\n",p->tm_sec);           /*��ȡ��ǰ��*/
}
void menu(){
	system("cls");

	printf("\n\n\n\n\n");
	printf("\t\t|--------------��Ʒ����ϵͳ----------------|\n");
	printf("\t\t|\t\t\t\t\t   |\n");
	printf("\t\t|\t\t      1,¼��               |\n");
	printf("\t\t|\t\t     2,����                |\n");
	printf("\t\t|\t\t     3,ɾ��                |\n");
	printf("\t\t|\t\t     4,�޸�                |\n");
	printf("\t\t|\t\t     5,����                |\n");
	printf("\t\t|\t\t     6,����                |\n");
	printf("\t\t|\t\t     7,ͳ��                |\n");
	printf("\t\t|\t\t\t\t\t   |\n");
	printf("\t\t|------------------------------------------|\n");
	printf("\n");
	printf("\t��ǰʱ��:");
	
}
int main(int argc, char *argv[]) {
	int n=0;
	system("color A4\n");
	menu();
	time();
	scanf("%d",&n);
	while(n) {
		if(n==1) {
			//in();
		} else if(n==2) {
			//search();
		} else if(n==3) {
			//Delete();
		} else if(n==4) {
			//information();
		} else if(n==5) {
			//insert();
		} else if(n==6) {
			//order();
		} else if(n==7) {
			//total();
		}
		getchar();
		time();
		menu();
		scanf("%d",&n);
	}
	return 0;
}
