#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char input[20] = { 0 };
	printf("请注意\n");
	Sleep(1000);
	printf("您的电脑将在1分钟内关机\n");
	system("shutdown -s -t 60");
	Sleep(5000);
	printf("请输入“徐旭最帅”以取消关机\n");
again:	
	printf("请输入：");
	scanf("%s", input);
	if (strcmp(input, "徐旭最帅") == 0)
	{
		system("shutdown -a");
		Sleep(1000);
		printf("已取消\n");
	}
	else
	{
		goto again;
	}
	return 0;
}