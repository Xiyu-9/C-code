#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>

//int main()
//{
//	auto int a = 10;//局部变量-自动变量
//
//	return 0;
//}

//int main()
//{
//		register int a = 10;//建议把a定义成寄存器变量
//		int a = 10;
//		a = -2;
////int 定义的变量是有符号的
////signed int
//		unsigned int num = 1;
		//struct-结构体关键字
		// union- 联合体/共用体
//	return 0;
//}

//int main()
//{
//	//typedef- 类型定义-类型重定义
//	//          张三----小三
//	/*typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;*/
//
//}

//static修饰局部变量
//局部变量的生命周期变长
// 
//static修饰全局变量
//改变了变量的作用域
//让静态的全局变量只能在自己所在的源文件内使用
//出了源文件就无法再使用了
// 
//static修饰函数
//也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部链接属性-> 内部链接属性



//void test()
//{
//	static int a = 1;//a是一个静态的局部变量 
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
//	//extern-声明外部符号的
//	extern int g_val;
//	printf("g_val\n", g_val);
//	return 0;
//}

//声明外部函数
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


//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max=Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4个字节
//	int* p;//p是一个变量-指针变量
//	//int* p = &a;
//	p=&a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*-解引用操作符-对p进行解引用操作，找到p所指向的对象a 
//	//通过*p找到a里面的值，把值改成20.
//	printf("%b\n", a);
//	//有一种变量是用来存放地址的-指针变量
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

//结构体
//char int double.....
//人、书-复杂对象
//名字+身高+年龄+身份证号码
//书名+作者+出版社+定价

//复杂对象-结构体-自己创造出来的一种类型

//创建一个结构体类型
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	 struct Book b1 = { "C语言程序设计",55 };
//   strcpy(b1.name,"C++");
//   strcpy-string copy-字符串拷贝-库函数-string.h
//	 printf("%s\n",b1.name); 
//   struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	//.  结构体变量.成员
//	//->  结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}
