#include<stdio.h>
#include<iostream>
using namespace std;
struct Student{
       int grade[10];
       int ID[10];
}Student_data;
int main(void){
	int i,j,t,g;
	for(i=0;i<10;i++){
		printf("输入成绩:"); 
		scanf("%d",&Student_data.grade[i]);
		printf("输入ID："); 
		scanf("%d",&Student_data.ID[i]); 
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(Student_data.grade[i]>Student_data.grade[j]){
				t=Student_data.grade[j];g=Student_data.ID[j];
				Student_data.grade[j]=Student_data.grade[i];Student_data.ID[j]=Student_data.ID[i];
				Student_data.grade[i]=t;Student_data.ID[i]=g;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("第%d名成绩:%d 第%d名ID:%d\n",i+1,Student_data.grade[i],i+1,Student_data.ID[i]);
	}
	return 0;
} 
