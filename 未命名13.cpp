#include<stdio.h>
//����˼·���ȵõ���ǰ���ֵĻ�������Ȼ���ٽ����߽��бȽϣ�������ǻ�����������������ӵ�ֵ���ظ����� 
void daoxu(int number1){//Ҫ�������number 
	int number2,number3,number4;
	 number4=number1;
	 number3=number1%10;
	 printf("%d",number1);
	while(number1/10){
			number1=number1/10;
		number3=number3*10+number1%10;
	}
	if(number3==number4){
		printf("\n");
		return;
	}else if(number3!=number4){
		printf("--->");
		daoxu (number4+number3);
	}
}
void cat(int number1,int i){//Ҫ�������number 
	int number2,number3,number4;
	 number4=number1;
	 i++;
	 number3=number1%10;
	while(number1/10){
			number1=number1/10;
		number3=number3*10+number1%10;
	}
	if(number3==number4){
		printf("%d",i-1);
		printf("\n");
		return;
	}else if(number3!=number4){
		cat (number4+number3,i++);
	}
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		int i=0;
		cat(x,i);
		daoxu(x);
		
	}
}
