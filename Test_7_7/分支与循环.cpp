#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//		/*if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//
//	//if (age < 18)
//	//	printf("δ����\n");
//
//	/*int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("666\n");*/
//
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//	    printf("����̸����\n");
//	}
//	else
//	{
//     if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("666\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i%2 == 1)
//			printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	/*{
//	case 1:
//	        printf("����һ\n");
//			break;
//	case 2:
//	        printf("���ڶ�\n");
//			break;
//	case 3:
//	        printf("������\n");
//			break;
//	case 4:
//	        printf("������\n");
//			break;
//	case 5:
//	        printf("������\n"); 
//			break;
//	case 6:
//	        printf("������\n"); 
//			break;
//	case 7:
//	        printf("������\n"); 
//			break;
//	}*/
//	/*{
//	case 1:
//		if (n = 1)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//	}*/
//
//	/*if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else if (4 == day)
//		printf("������\n");
//	else if (5 == day)
//		printf("������\n");
//	else if (6 == day)
//		printf("������\n");
//	else if (7 == day)
//		printf("������\n");*/
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{  //switch����Ƕ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//int main()
//{
//	//int i = 1;
//	//while (i<=10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d", i);
//	//    i++;
//	//}
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	int ch = 0;
	while ((ch=getchar())!=EOF) //EOF - end of file -> -1
	{
		putchar(ch);
	}
	return 0;
}