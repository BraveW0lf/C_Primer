#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int A(int x, int y);
//{
//	int z = x + y;
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	/*sum = num1 + num2;*/
//	sum = Add(num1, num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//}


//int main()
//{   //����������
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}
//{   //��λ������
//	int a = 1;
//	int b = a << 1;//�ƶ�����λ
//	printf("%d\n", b);
//	return 0;
//}
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001
//	int d = a ^ b;//��Ӧ������λ��ͬ��Ϊ0��������Ϊ1
//	printf("%d\n", c);
//	return 0��
//}
//{
	//int a = 10;
	//int b = 20;
	//a + b;//+˫Ŀ������
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//{   //ǿ������ת��
//	int a = (int)3.14;
//	return 0;
//}
//{   //�߼�������
//	int a = 3;
//	int b = 5;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}
//{   //����������
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return 0;
}
int main()
{
	//int arr[10] = { 0 };
	//arr[4];//[]�±����ò�����
	int a = 10;
	int b = 20;
	int sum = Add(a,b);//()�������ò�����
	printf("sum=%d\n", sum);
	return 0;
}