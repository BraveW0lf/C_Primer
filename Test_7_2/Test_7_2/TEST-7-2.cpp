#include<stdio.h>
//int main()
//{
//	short age = 20;//���ڴ����������ֽ�=16bitλ���������20
//	float weight = 90.2f;//���ڴ�����6���ֽڴ��С��
//	return 0;
//}


//int a = 100;//ȫ�ֱ���
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//�ֲ�����
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//C�����﷨���ƣ�����Ӧ�����ڵ�ǰ�������ǰ��
//	scanf_s("%d%d", &num1, &num2);//VS��������scanf����scanf_s
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

int main()
{
	extern int g_val;//����extern�ⲿ����
	printf("g_val=%d\n", g_val);
	return 0;
}