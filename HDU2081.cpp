#include<stdio.h>
int main() {
	int N,i,j;
	char Number[11];
	int number[7];
	scanf("%d",&N);
    while(N--) {
    	j=0;
		for(i=0; i<11; i++) {
			scanf("%s",&Number[i]);
		}
		for(i=0;i<11;i++){
			if(i>4){
				number[j]=Number[i];
				j++;
			}
		} 
		for(i=0;i<j;i++) {
			printf("%d",number[i]);
		}
		printf("\n");
	}
	return 0;
}
