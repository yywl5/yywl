#include<stdio.h>
#include<math.h>
int main(void){//main主函数 
	int i,j;//定义变量 
	int n,m;
	int x,y;
	double a,t;//精确到小数点后变量 
	while(scanf("%d%d",&n,&m)!=EOF){//多组数据输入 
		a=0;//每一组新数据变量重置 
		x=0;
		y=0;
		for(i=0;i<n;i++){//循环，二维矩阵，行 
			for(j=0;j<m;j++){// 列 
				scanf("%lf",&t);//输入变量t，每一行每一列的数值， 
				if(fabs(t)>fabs(a)){//判断条件：比较绝对值，如果t大于a，则将t的值赋给a，将i的值赋给x，将j的值赋给y。 
					a=t;
					x=i;
					y=j;
				}
			}
		}
		printf("%d %d %.0f\n",x+1,y+1,a);//输出值 
	}
} 
