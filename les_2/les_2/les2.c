#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX)
//
//}

//int main()
//{
//	//const-常属性
//	//const int n = 10;
//	//int arr[10] = { 0 };//10变n不行，因为即使加了const具有常属性他还是个变量，在使用常量的地方还是不能用的
//
//	//const修饰的常变量 
//	//const int num = 4;//加const后变量不可修改
//	//printf("%d", num);
//	//num = 8;
//	//printf("%d", num);
//	return 0;
//}
//
//int main()
//{
//	//字面常量
//	/*3;
//	100;
//	3.14;*/
//	return 0;
//}


//枚举常量
//枚举：一一列举
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1，2，3，4，5，6，7
//枚举关键字-enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-枚举常量-是不能改的“BULE”“RED”那些，但是函数中创建的函数是可以改的比如“color”
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
//字符串类型
//int main()
//{
//	"abcde";
//	"";空字符串
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//#av$
//	//a-97
//	//A-65
//	//...
//	//ASCII编码
//	//ASCII码值
//	char arr1[]="abc";//数组
//	//"abc"--'a''b''c''\0'---'\0是字符串的结束标志'
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
//	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//转义字符
//int main()
//{
//  printf("%c\n",'b');
//  printf("%s\n","abc");
//	printf("c:\test\32\test.c");//\t-水平制表符
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码
//	//32-->10进制26->作为ASCII码值代表的字符
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>20000)
//	printf("好offer\n");
//	return 0;
//}



//函数
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
//函数
//f(x) = 2 * x + 1;
//f(x, y) = x + y;

//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4; */
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数据的数组
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//下标的方式访问元素
//	//arr[下标];
//	//char ch[20];//
//	//float arr2[5];
//	return 0;
//}

//int main()
//{
//	//int a = 5 / 2;//2
//	int a = 5 % 2;//取模
//	pritnf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000001
//	int b=a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//位操作

//int main()
//{
//	//（2进制）位操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001
//	int c = a^ b;//不是次方-是异或
//	//异或的计算规律:
//	//对应的二进制位相同则为0
//	//对应的二进制位相异则为1
//	printf("%d\n", c);
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	a = 20;//=赋值  ==判断相等
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *=  /= %= >>= <<= &= |= ^=
//	return 0;
//}


//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+双目操作符
//	//c语言中我们表示真假
//	//0-假
//	//非1-真
//	//int a = 10;
//	int a = -2;
//	int b = -a;
//	int c = +3;//+正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//10个整型元素的数组
//	//10*sizeof(int)=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	int a = 10;
//	//sizeof计算的是变量或者类型所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);这种写法是错误的，不行
//	return 0;
//}

