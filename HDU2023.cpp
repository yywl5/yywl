#include<stdio.h>
#include<math.h>
int main(void){
	int i,j,k,a,t;
	int n,m;
	int list[100][10]; 
	double sumi,sumj;
	double summaryi[100],summaryj[10];
	int total;
	while(scanf("%d %d",&n,&m)!=EOF){//n个学生，m门课。其中n小于等于50，m小于等于5. 
	sumi=0;sumj=0;t=0;total=0;
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				scanf("%d",&list[i][j]);
			}
		}
		for(j=1;j<=m;j++){
			sumi=0;
			for(i=1;i<=n;i++){
				sumi=sumi+list[i][j];
				if(i==n){
					summaryi[k]=sumi/n;
					k++;
				}
				if(list[i][j]>=summaryi[k-1]){
				t++;
				if(t==m){
					total++;
				}
			}
			}
		}
		for(i=1;i<=n;i++){
			sumj=0;
			for(j=1;j<=m;j++){
				sumj=sumj+list[i][j];
				if(j==m){
					summaryj[a]=sumj/m;
					a++;
				}
			}
		}
		 for(i=0;i<k;i++){
		 	printf("%.2lf ",summaryi[i]);
		 }
		 printf("\n");
		 for(j=1;j<a;j++){
		 	printf("%.2lf ",summaryj[j]);
		 }
		 printf("\n");
		 printf("%d\n",total);
	}
	return 0;
} 
