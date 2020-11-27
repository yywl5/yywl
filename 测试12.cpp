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
    printf("%d-",1900+p->tm_year);      /*获取当前年份,从1900开始，所以要加1900*/
    printf("%d-",1+p->tm_mon);          /*获取当前月份,范围是0-11,所以要加1*/
    printf("%d ",p->tm_mday);           /*获取当前月份日数,范围是1-31*/
    printf("%d:",8+p->tm_hour);         /*获取当前时,这里获取西方的时间,刚好相差八个小时*/
    printf("%d:",p->tm_min);            /*获取当前分*/
    printf("%d\n",p->tm_sec);           /*获取当前秒*/
}
void menu(){
	system("cls");

	printf("\n\n\n\n\n");
	printf("\t\t|--------------商品管理系统----------------|\n");
	printf("\t\t|\t\t\t\t\t   |\n");
	printf("\t\t|\t\t      1,录入               |\n");
	printf("\t\t|\t\t     2,查找                |\n");
	printf("\t\t|\t\t     3,删除                |\n");
	printf("\t\t|\t\t     4,修改                |\n");
	printf("\t\t|\t\t     5,插入                |\n");
	printf("\t\t|\t\t     6,排序                |\n");
	printf("\t\t|\t\t     7,统计                |\n");
	printf("\t\t|\t\t\t\t\t   |\n");
	printf("\t\t|------------------------------------------|\n");
	printf("\n");
	printf("\t当前时间:");
	
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
