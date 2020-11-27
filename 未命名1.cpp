#include <stdio.h>
#include <stdlib.h>
struct Goods {
	char Goods_ID[30];
	char Goods_type[30];
	char Goods_name[30];
	float Goods_number;
	float Goods_price;
};
typedef struct Goods GOOD;
int main() {
	GOOD *point;
	point=(GOOD*)malloc(sizeof(GOOD));
 FILE *fp;
 if(NULL == (fp = fopen("goods.txt", "r"))) {
  printf("error\n");
  exit(1);
 }

 char ch;
 while(EOF != (ch=fgetc(fp))) {
 	if(ch==' '){
 		printf(" ");
	 }
  printf("%c", ch);
 }

 fclose(fp);

 return 0;
}
