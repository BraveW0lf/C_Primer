#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char input[20] = { 0 };
	printf("��ע��\n");
	Sleep(1000);
	printf("���ĵ��Խ���1�����ڹػ�\n");
	system("shutdown -s -t 60");
	Sleep(5000);
	printf("�����롰������˧����ȡ���ػ�\n");
again:	
	printf("�����룺");
	scanf("%s", input);
	if (strcmp(input, "������˧") == 0)
	{
		system("shutdown -a");
		Sleep(1000);
		printf("��ȡ��\n");
	}
	else
	{
		goto again;
	}
	return 0;
}