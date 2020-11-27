#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct commdity {
	int num;
	char name[15];
	double price;
	double count;
	double total;
} commdity;
struct commdity list[50];
void in();
void show();
void order();
void Delete();
void menu();
void insert();
void information();
void search();
void total();
void menu(){
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t|---------------------商品管理系统----------------|\n");
	printf("\t\t\t\t\t\t\t\t|\n");
	printf("\t\t|\t\t     1,录入                |\n");
	printf("\t\t|\t\t     2,查找                |\n");
	
}
int main(int argc,char *argv[]) {
	system("color f3\n");
	menu();
	scanf("%d",&n);
	while(n) {
		if(n==1) {
			in();
		} else if(n==2) {
			search();
		} else if(n==3) {
			Delete();
		} else if(n==4) {
			information();
		} else if(n==5) {
			insert();
		} else if(n==6) {
			order();
		} else if(n==7) {
			total();
		}
		getchar();
		menu();
		scanf("%d",&n);
	}
	return 0;
}


