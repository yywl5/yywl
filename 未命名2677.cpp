#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Orders {
	int number;//�������
	char Num[9];//��Ʒ���
	int sum;//������
	float price;//����
	float add;//�ܽ��
	struct Orders *next;//ָ����һ����Ԫ��ָ��
};
void displayStudents(struct Orders *s) {
	int i = 0;
	while(s!=NULL) { 
	printf("%d %s %d %.1f %.1f\n",s->number,s->Num,s->sum,s->price,s->add);
        s = s->next;
		i++;
	}
}
int main () {
	struct Orders head,*point=&head;
	FILE *fil=fopen("order.txt","r");
	if(fil==NULL) {
		printf("order.txt�ļ�ȱʧ�������޷�ִ�в��ֹ���");
	}

	while(!feof(fil)) {
		if ((point=(Orders*)malloc(sizeof(Orders))) == NULL) {
			printf("\n  --�޷������ڴ�ռ䣡\n");
			fclose(fil);
		} 
		fscanf(fil,"%d%s%d%f%f",&point->number,point->Num,&point->sum,&point->price,&point->add);

		point->next=(struct Orders*)malloc(sizeof(Orders));
		point=point->next;

	}
	fclose(fil);
	point=&head;
	displayStudents(point);
}
