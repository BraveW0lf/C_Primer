#include <stdio.h>
#include<string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", sizeof(pd));
//	//int a = 10;
//	////printf("%p\n", &a);
//	//int* p = &a; //  p是一个指针变量
//	////printf("%d\n", p);
//	//*p = 20; //  *解引用操作符
//	return 0;
//}

//struct Book//创建一个结构体类型
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};  //分号不可缺少
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55};  //利用结构体类型，创建一个该类型的结构体变量
//	struct Book* pb = &b1;
//	//利用pb打印书名和价格
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);  //.结构体变量.成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);   //->结构体指针->成员
//	//
//	//printf("书名;%s\n", b1.name);
//	//printf("价格;%d元\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格：%d元\n", b1.price);
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);  //strcpy-string copy - 字符串拷贝 - 库函数 - string.h
//	return 0;
//}