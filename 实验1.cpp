#include<stdio.h>
int add(int *value,int *increasement){
	int *sum; 
	*sum=*value+*increasement;
	return *sum; 
}
int main(void){
int value=90,increasement=5;
int sum;
sum=add(&value, &increasement);
printf("%d\n",sum);
return 0;
} 
