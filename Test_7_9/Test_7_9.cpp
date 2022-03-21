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


//n的阶乘
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

//1！+2！+...+10！
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

//在有序数组中查找具体的某个数字n
//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////在arr数组（有序的）中找到7
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("找到了，下标是：%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//	printf("找不到\n");
	//return 0;


	//二分查找
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);	//计算元素个数
//	int left = 0;  //左下标
//	int right = sz - 1;  //右下标
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
//		   printf("找到了，下标是：%d\n", mid);
//		   break;
//	   }
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//}

//演示多个字符从两端移动，向中间聚拢
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
//	   Sleep(1000);//休息一秒
//	   system("cls");//执行系统命令的函数   cls-清空屏幕
//	   left++;
//	   right--;	
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//模拟用户登录，只允许输入密码三次
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//==不能用来比较字符串是否相等,应使用库函数--strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，请退出程序\n");
//	return 0;
//}


//猜数字游戏
//1、电脑会生成一个随机数    2、猜数字
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
	//1、生成一个随机数
	int ret = 0;
	int guess = 0;  //接收猜的数字
	ret = rand() % 100 - 1;  //生成1—100之间的随机数
	//printf("%d\n", ret);
	//2、猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("猜大了\n");
		}
		else if (guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int  input = 0;
	srand((unsigned int) time(NULL)); //拿时间戳设置随机数的生成起始点
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}