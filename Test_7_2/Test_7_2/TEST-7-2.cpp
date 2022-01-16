#include<stdio.h>
//int main()
//{
//	short age = 20;//向内存申请两个字节=16bit位，用来存放20
//	float weight = 90.2f;//向内存申请6个字节存放小数
//	return 0;
//}


//int a = 100;//全局变量
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//局部变量
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//C语言语法限制，变量应定义在当前代码块最前面
//	scanf_s("%d%d", &num1, &num2);//VS编译器下scanf需用scanf_s
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

int main()
{
	extern int g_val;//声明extern外部符号
	printf("g_val=%d\n", g_val);
	return 0;
}