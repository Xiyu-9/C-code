#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>

//int main()
//{
//	auto int a = 10;//�ֲ�����-�Զ�����
//
//	return 0;
//}

//int main()
//{
//		register int a = 10;//�����a����ɼĴ�������
//		int a = 10;
//		a = -2;
////int ����ı������з��ŵ�
////signed int
//		unsigned int num = 1;
		//struct-�ṹ��ؼ���
		// union- ������/������
//	return 0;
//}

//int main()
//{
//	//typedef- ���Ͷ���-�����ض���
//	//          ����----С��
//	/*typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;*/
//
//}

//static���ξֲ�����
//�ֲ��������������ڱ䳤
// 
//static����ȫ�ֱ���
//�ı��˱�����������
//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//����Դ�ļ����޷���ʹ����
// 
//static���κ���
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ��������-> �ڲ���������



//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ����� 
//	
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//extern-�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val\n", g_val);
//	return 0;
//}

//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//#define �����ʶ������
//#define MAX 100
//#define ���Զ����-������

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max=Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p;//p��һ������-ָ�����
//	//int* p = &a;
//	p=&a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*-�����ò�����-��p���н����ò������ҵ�p��ָ��Ķ���a 
//	//ͨ��*p�ҵ�a�����ֵ����ֵ�ĳ�20.
//	printf("%b\n", a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n",&a);
//
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
// printf("%d\n",sizeof((pc));
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//�ṹ��
//char int double.....
//�ˡ���-���Ӷ���
//����+���+����+���֤����
//����+����+������+����

//���Ӷ���-�ṹ��-�Լ����������һ������

//����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	 struct Book b1 = { "C���Գ������",55 };
//   strcpy(b1.name,"C++");
//   strcpy-string copy-�ַ�������-�⺯��-string.h
//	 printf("%s\n",b1.name); 
//   struct Book* pb = &b1;
//	//����pb��ӡ�������ͼ۸�
//	//.  �ṹ�����.��Ա
//	//->  �ṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("������%s\n", (*pb).name);
//	printf("�۸�%d\n", (*pb).price);
//
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}
