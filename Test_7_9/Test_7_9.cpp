#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//n�Ľ׳�
//int main()
//{
//	//int a = 1;
//	//int b = 1;
//	//while (a <= 10)
//	//{
//	//	b = b * a;
//	//	a++;
//	//}
//	//printf("%d\n", b);
//	//return 0;
//
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//1��+2��+...+10��
//int main()
//{
//	/*int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <=3; n++)
//	{
//		ret = 1;
//	    for (i = 1; i <= n; i++)
//	    {
//		    ret = ret * i;
//	    }
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;*/
//
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//	    ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//�����������в��Ҿ����ĳ������n
//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////��arr���飨����ģ����ҵ�7
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//	printf("�Ҳ���\n");
	//return 0;


	//���ֲ���
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);	//����Ԫ�ظ���
//	int left = 0;  //���±�
//	int right = sz - 1;  //���±�
//	while (left<=right)
//	{
//	   int mid = (left + right) / 2;
//	   if (arr[mid] > k)
//	   {
//		   right = mid - 1;
//	   }
//	   else if (arr[mid] < k)
//	   {
//		   left = mid - 1;
//	   }
//	   else
//	   {
//		   printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//		   break;
//	   }
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//}

//��ʾ����ַ��������ƶ������м��£
//int main()
//{
//	char arr1[] = "hahahahahahahahahaha";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//	   arr2[left] = arr1[left];
//	   arr2[right] = arr1[right];
//	   printf("%s\n", arr2);
//	   Sleep(1000);//��Ϣһ��
//	   system("cls");//ִ��ϵͳ����ĺ���   cls-�����Ļ
//	   left++;
//	   right--;	
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ���û���¼��ֻ����������������
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//==���������Ƚ��ַ����Ƿ����,Ӧʹ�ÿ⺯��--strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("����������������˳�����\n");
//	return 0;
//}


//��������Ϸ
//1�����Ի�����һ�������    2��������
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("****    1.play    0.exit    ****\n");
	printf("********************************\n");
}
//RAND_MAX  32767
void game()
{
	//1������һ�������
	int ret = 0;
	int guess = 0;  //���ղµ�����
	ret = rand() % 100 - 1;  //����1��100֮��������
	//printf("%d\n", ret);
	//2��������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("�´���\n");
		}
		else if (guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int  input = 0;
	srand((unsigned int) time(NULL)); //��ʱ��������������������ʼ��
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}