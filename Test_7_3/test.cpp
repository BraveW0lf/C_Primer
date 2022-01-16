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
//	//3;// 1、字面常量
//	
//
//	//const-常属性
//	//const int n = 10;//n是变量，但又有常属性，所以我们说n是常变量
//	//int arr[n] = {0};
//	//n = 20;
//	
//	//const int num = 4;// 2、const修饰的常变量
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	
//	return 0;
//}
 
//3、#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	print("%d\n", MAX);
//	return 0;
//}

//4、枚举常量
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
//	char arr1[] = "abc";//	数组
//	"abc"--'a'  'b'  'c' '\0' -- '\0'字符串的结束标志
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
//	printf("%d\n", strlen(arr1));//strlen  string length  定义字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("C:\\test");
//	printf("%c\n", '\'');
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	   //32 两个八进制数字，32作为八进制代表的十进制数字，作为ASC码值，对应的字符     32--26
//	printf("%c\n", '\32');
//	printf("%c\n", '\x61');
//	return 0;
//}


//int main()
//{
//	/*int input = 0;
//	printf("加入华中\n");
//	printf("你要好好学习吗？(1 / 0) > ;");
//	scanf("%d", &input);
//	if (input = 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");*/
//
//	int line = 0;
//	while (line<2000)
//	{
//		printf("敲一行代码 %d\n",line);
//		line ++ ;
//	}
//	if(line>=2000)
//	   printf("好offer\n");
//	return 0;
//}


#define M 3
#define N M+1
int main()
{
	printf("%d", N*M);
	return 0;
}