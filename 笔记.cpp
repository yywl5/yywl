//数据结构笔记
//1：指针
//int *p;
//int i=10;
//int j;
//j=*p;
//printf("%d\n",j);
//p是个指针变量，int *p表示该 变量只能储存int类型变量的地址；
//指针是c语言的灵魂
//cpu与内存之间有三根线，第一根为地址线，第二根为控制线，第三根为数据线，cpu将数据经过计算后存入内存，内存可以化为许多小格子，从0开始编号，到4G-1；
//控制线控制数据处理方式，读，写，还是只读，只写。将编译内容靠数据线进行传输。地址即为内存中的小格子编号；
//内存的编号不能够重复，但内存单元的内容可以一致；
//指针即为地址，地址就是指针；指针变量是存放地址的变量；
//p可以保存其他整型变量地址。p里面虽然没有保存真正整形变量地址，但里面仍旧保存了一个垃圾数字。*p表示了一个不确定的单元。i=*p；j没有赋值，则j为一个垃圾数字；
//地址为编号。每一个数字对应的位置是确定的，但是其所对应的内容并不确定；程序运行完了，则内存自行回收；(正常情况); 
//p变量的内存本身属于操作系统，整个硬件由操作系统控制。释放，程序已经将空间使用完毕，j变量如果不分配内存，则很容易变为垃圾数字；
//内存是多字节组成的线性一维空间。字节与编号为一一对应；
// 软件在运行前需要向系统申请内存空间；
//在软件运行期间，其所占用的内存不再分配给其他变量。
//int *p;
//p=&i；
//指针变量也为变量，只不过保存的为内存变量地址。
//一个字节一个地址
//一个变量可能占好多字节。但是被赋值变量只存放一个地址， 
//结构体
//跨函数使用内存的问题(重点)
//为什么会出现结构体？
//如何使用结构体？ 
// 什么叫做结构体？
//int sid;
//char name[20];
//int age;
//想要表示一个学生一部分，则将三部分结合在一起，c++与java中用类来表示
//很多课程用不同的东西解决同一个问题
//void inputStudent(){}
//struct student{}
//类可以更完整的表现一个事物，而结构体表现事物依旧存在一些缺陷；结构体为用户根据自己实际需要；类是否为数据类型；
//struct student(){
//int sid;
//int age;
//char name[20];
//};最后的分号不能省去；
//定义了一个新的数据类型；
//sid，age，name【20】为成员，不是类型；类型为整体；
//int main(void){
//struct student st ={1000."zhanghua",20};
//printf("%d %s %d\n",st.sid,st.name,st.age);
//用点来表示类型中成员；
//strcpy 复制函数
//如何定义变量？如何使用变量？st.的方式可以使用内部成员；
//变量名.成员名的方式进行调用
//如何使用结构体变量？
//用一个指针p访问所有的变量，定义一个指针变量*pst
//假定有208个字节，整体上有4G个单元，pst->sid=99;
//pst一开始并没有存放任何有效变量地址；
//pst->sid 等价于（*pst）.sid等价于sid name 
//pst=&st;
// 1.st.sid
// 2.pst->sid(pst所指向的结构体变量中的sid成员）最终表示的是sid这个成员 
//注意事项：结构体变量不能加减乘除，但是可以相互赋值，普通结构体变量和结构体指针变量作为函数传参的问题
// int main(){
//struct student st;
//f(&st); 
//int i;(i一定会有内存空间，但是其中是一个垃圾数字)(属于静态变量） 
//}
//将st的地址发送给pst，(*pst).sid=99;
//strcpy(pst->name,"zhangsan");
//在主函数中用struct student *pst;
//pst=Createstudent();
//数据结构研究数据的存储问题，算法解决算法的运算问题
//线性结构(将所有的节点用一根直线穿起来) 
//#include<stdio.h>
//struct arr{
//int * base;(储存的是数组第一个元素的地址) 
//int len;(数组中元素个数) 
//int cnt;(当前数组的有效元素个数) 
//int increase;
//}
//定义变量
//结构体为我们自己定义的一个数据类型 
//void init_arr();初始化 
//bool append_arr();//追加, 
//bool insert_arr();
//bool delete_arr();
//bool get();
//bool is_full();
//bool sort_arr();
//bool is_empty();
//void show_arr();
//void inversion_arr();
//int main(void){} 
//pst->age=22;
//}(输出也可以用链表来实现；
//需要加前置声明void f(struct student *pst)
//方式耗内存，不推荐；
//malloc动态分配如何实现 
//EXP：如果没有使用malloc函数，均为静态分配
//int main(void){
//int a[5]={1,2,3,4,5};
//可以在程序运行当中动态的分配内存
//int len;
//printf("请输入你需要分配的数组长度")；
//scanf("%d",len);
//int *p=(int *)malloc(sizeof(int)*len);
//请求操作系统为程序分配20个字节的空间，将20个内存的控制权限；
//为什么加(int *)强制转换；
//malloc函数只返回第一个字节地址，告诉编译器返回的是第一个地址是什么类型的地址。
//返回4个字节地址，每一个变量所占字节不同。例如double占8个字节地址，int占4个字节地址；
//动态分配可以根据用户需求分配不同内存
//可以用free函数对内存进行释放
//java有虚拟调控自行进行回收空间
//void init_arr(struct arr * array)
//{
//*array->base=(int *)malloc(sizeof(int) *len);
//if(NULL==array->base){
//printf("动态内存分配失败！\n");
//show_arr(&arr,6);
//exit(-1);中止程序
//}
//else{
//array->len=length;
//array->cnt=0;
//void show_arr(struct arr *parr){
//if(数组为空) is_empty(&parr)
//提示数组为空printf("数组为空")； 
//else
//输出数组有效内容for(i=0;i<parr->ant;i++){printf("%d",parr[i]);}
//printf()
//}
//bool append_arr(struct arr * parr, int val)
// 
