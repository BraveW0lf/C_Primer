#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d" , &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	//3;// 1�����泣��
//	
//
//	//const-������
//	//const int n = 10;//n�Ǳ����������г����ԣ���������˵n�ǳ�����
//	//int arr[n] = {0};
//	//n = 20;
//	
//	//const int num = 4;// 2��const���εĳ�����
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	
//	return 0;
//}
 
//3��#define����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	print("%d\n", MAX);
//	return 0;
//}

//4��ö�ٳ���
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	/*enum Sex s = FEMALE;*/
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";//	����
//	"abc"--'a'  'b'  'c' '\0' -- '\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0};
//	printf("%d\n", strlen(arr1));//strlen  string length  �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("C:\\test");
//	printf("%c\n", '\'');
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	   //32 �����˽������֣�32��Ϊ�˽��ƴ����ʮ�������֣���ΪASC��ֵ����Ӧ���ַ�     32--26
//	printf("%c\n", '\32');
//	printf("%c\n", '\x61');
//	return 0;
//}


//int main()
//{
//	/*int input = 0;
//	printf("���뻪��\n");
//	printf("��Ҫ�ú�ѧϰ��(1 / 0) > ;");
//	scanf("%d", &input);
//	if (input = 1)
//		printf("��offer\n");
//	else
//		printf("������\n");*/
//
//	int line = 0;
//	while (line<2000)
//	{
//		printf("��һ�д��� %d\n",line);
//		line ++ ;
//	}
//	if(line>=2000)
//	   printf("��offer\n");
//	return 0;
//}


#define M 3
#define N M+1
int main()
{
	printf("%d", N*M);
	return 0;
}