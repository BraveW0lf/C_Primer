#include <stdio.h>
#include<string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", sizeof(pd));
//	//int a = 10;
//	////printf("%p\n", &a);
//	//int* p = &a; //  p��һ��ָ�����
//	////printf("%d\n", p);
//	//*p = 20; //  *�����ò�����
//	return 0;
//}

//struct Book//����һ���ṹ������
//{
//	char name[20];//C���Գ������
//	short price;//55
//};  //�ֺŲ���ȱ��
//int main()
//{
//	struct Book b1 = { "C���Գ������",55};  //���ýṹ�����ͣ�����һ�������͵Ľṹ�����
//	struct Book* pb = &b1;
//	//����pb��ӡ�����ͼ۸�
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);  //.�ṹ�����.��Ա
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);   //->�ṹ��ָ��->��Ա
//	//
//	//printf("����;%s\n", b1.name);
//	//printf("�۸�;%dԪ\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);  //strcpy-string copy - �ַ������� - �⺯�� - string.h
//	return 0;
//}