#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#define����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX)
//
//}

//int main()
//{
//	//const-������
//	//const int n = 10;
//	//int arr[10] = { 0 };//10��n���У���Ϊ��ʹ����const���г����������Ǹ���������ʹ�ó����ĵط����ǲ����õ�
//
//	//const���εĳ����� 
//	//const int num = 4;//��const����������޸�
//	//printf("%d", num);
//	//num = 8;
//	//printf("%d", num);
//	return 0;
//}
//
//int main()
//{
//	//���泣��
//	/*3;
//	100;
//	3.14;*/
//	return 0;
//}


//ö�ٳ���
//ö�٣�һһ�о�
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//���ڣ�1��2��3��4��5��6��7
//ö�ٹؼ���-enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-ö�ٳ���-�ǲ��ܸĵġ�BULE����RED����Щ�����Ǻ����д����ĺ����ǿ��Ըĵı��硰color��
//int mian()
//{
//	//enum Sex s=FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}
//
// 

//int float
//char
//�ַ�������
//int main()
//{
//	"abcde";
//	"";���ַ���
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//#av$
//	//a-97
//	//A-65
//	//...
//	//ASCII����
//	//ASCII��ֵ
//	char arr1[]="abc";//����
//	//"abc"--'a''b''c''\0'---'\0���ַ����Ľ�����־'
//	
//
//	char arr2[] = { 'a','b','c',0};
//	//'\0'-0
//	//'a'-97
//	//'a''b''c'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//ת���ַ�
//int main()
//{
//  printf("%c\n",'b');
//  printf("%s\n","abc");
//	printf("c:\test\32\test.c");//\t-ˮƽ�Ʊ��
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��
//	//32-->10����26->��ΪASCII��ֵ������ַ�
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>20000)
//	printf("��offer\n");
//	return 0;
//}



//����
//int Add(int x, int y)
//{
//	int z=x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 100;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//����
//f(x) = 2 * x + 1;
//f(x, y) = x + y;

//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4; */
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ݵ�����
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
//	//arr[�±�];
//	//char ch[20];//
//	//float arr2[5];
//	return 0;
//}

//int main()
//{
//	//int a = 5 / 2;//2
//	int a = 5 % 2;//ȡģ
//	pritnf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000001
//	int b=a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//λ����

//int main()
//{
//	//��2���ƣ�λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001
//	int c = a^ b;//���Ǵη�-�����
//	//���ļ������:
//	//��Ӧ�Ķ�����λ��ͬ��Ϊ0
//	//��Ӧ�Ķ�����λ������Ϊ1
//	printf("%d\n", c);
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ  ==�ж����
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *=  /= %= >>= <<= &= |= ^=
//	return 0;
//}


//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+˫Ŀ������
//	//c���������Ǳ�ʾ���
//	//0-��
//	//��1-��
//	//int a = 10;
//	int a = -2;
//	int b = -a;
//	int c = +3;//+���Ŷ���ʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//10������Ԫ�ص�����
//	//10*sizeof(int)=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//���������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	int a = 10;
//	//sizeof������Ǳ�������������ռ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);����д���Ǵ���ģ�����
//	return 0;
//}

