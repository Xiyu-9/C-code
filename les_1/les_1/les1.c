//����һ����stdio.h���ļ�
//std-��׼standard i-input o-out
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int �����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()//������-��������-main��������ֻ��һ��
//{
//	//�����������
//	//����Ļ�����hehe
//	//����-print function-printf
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-���к�
//	//#include
//	printf("hehe\n");
//	return 0;//���� 0
//}



/*void main()
{
}����д���ǹ�ʱ��д��*/


//char-�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ��������-��С��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡʮ����������

//int main()
//{
//	char ch;// = 'A';//�ڴ棬ch-����
//	printf("%c\n",ch);//%c--��ӡ�ַ���ʽ������
//	//20;
//	//short int-������
//	//int-����
//	int age = 20;
//	printf("%d\n",age);//%d--��ӡ����ʮ��������
//	//long-������
//	long num = 100;
//	printf("%d\n", num);
//	//float
//	float f = 5.0;
//	printf("%f\n", f);
//	//double
//	double d = 3.14;
//	printf("%lf\n", d); 
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	return 0;
//}

//int main()
//{
//	//����
//	//20
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽ�
//}
//
//
//int num1 = 10;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num2 = 10;//�ֲ�����-�����ڴ���飨{}��֮�ڵı���
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ������������bug��������������ͬ��ʱ�򣬾ֲ�����Ҫ���ȡ�
//�ֲ�������������
//ȫ�ֱ�����������-��������
//δ�����ı�ʶ��Ҫ����
//����extern�ⲿ���ŵ�
//int mian()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);//�ᱨ����Ϊa������ֻ�������ŷ�Χ��ʹ��
//	return 0;
//}

//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	
//	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum=num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
