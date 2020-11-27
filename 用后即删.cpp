#include<stdio.h>
#include<math.h>
int main(){
	float s;
	int g;
	float S;
	while(scanf("%f",&s)!=EOF){
       s=s*100;
       g=(int)s;
       while(g){
       	S=g%10+S;
       	g=g/10;
       	S=S*10;
	   }
	   S=S/1000;
	   printf("%.2lf",S); 
	}
} 
