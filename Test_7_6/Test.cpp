#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;//typedef ���Ͷ���
//	unsigned int num = 20;
//	u_int num2 = 20;
//	printf("%d\n", num);
//	printf("%d\n", num2);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static ���ξֲ��������ֲ������������ڱ䳤
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a , b);
//	printf("sum = %d\n", sum);
//	return 0;
//}



//#define Max 100

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		ruturn y
//}

//��Ķ���
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int a = Max;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;  //4���ֽ�
//	int* p = &a;  //ȡ��ַ
//	   //��һ�ֱ���������ŵ�ַ--ָ�����
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;  // *-- �����ò�����
//	printf("a=%d\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;
}