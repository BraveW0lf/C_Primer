#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//char arr1[] = "bit";
//	//char arr2[20] = "************";
//	//strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	// //strcpy - string copy - �ַ�������
//	// //strlen - string length - �ַ��������й�
//
//	char arr[] = "hello word";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** word
//	return 0;
//}

//���庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);  //������ʹ��
//	printf("max=%d\n", max);
//	return 0;
//}
 

//7��5��

//���ú���������������
//void swap1(int x, int y)   �����������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)  //��ʽ�ϵĲ���
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	/*swap1(a, b);*/    //����swap1��������ֵ����
//	swap2(&a,&b);    //��ַ����
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
// 
//int main()
//{
//	int a = 10;
//	int* pa = &a; //paָ�����
//	*pa = 20; //�����ò���
//	printf("%d\n", n);
//	return 0;
//}


//�ж�һ�����ǲ�������
///*int is_prime(int n)
//{
//	if ( n % 2 == 1)
//	{
//		printf("%d\n", n);
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}*/
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for ( j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}

//7��12��
//�ж��Ƿ�Ϊ����
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d", year);
//		}
//	}
//	return 0;
//}

//���ֲ���
//                   ��������һ��ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//int main()
//{
//	//�ҵ��˷����±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);  //���ݵ�������arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//ÿ����һ�κ�����numֵ+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//��������ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



/*//��������
int Add(int, int);*/

#include"Add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
/*//�����Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}*/