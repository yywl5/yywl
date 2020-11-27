#include<stdio.h>
 int main(){
 	int n,x1,y1,x2,y2,x3,y3;
 	float a,b;
 	while(scanf("%d",&n)!=EOF&&n!=0){
 		b=0;
 		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 		for(n=n-2;n>0;n--){
 			scanf("%d%d",&x3,&y3);
 			a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
 			b=b+a;
 			x2=x3;
 			y2=y3;
		 }
		 printf("%.1f\n",b);
	 } 
	 return 0;
 }
