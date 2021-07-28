//包含一个叫stdio.h的文件
//std-标准standard i-input o-out
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()//主函数-程序的入口-main函数有且只有一个
//{
//	//这里完成任务
//	//在屏幕上输出hehe
//	//函数-print function-printf
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-打招呼
//	//#include
//	printf("hehe\n");
//	return 0;//返回 0
//}



/*void main()
{
}这种写法是过时的写法*/


//char-字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打小数
//%p-以地址的形式打印
//%x-打印十六进制数字

//int main()
//{
//	char ch;// = 'A';//内存，ch-变量
//	printf("%c\n",ch);//%c--打印字符格式的数据
//	//20;
//	//short int-短整型
//	//int-整型
//	int age = 20;
//	printf("%d\n",age);//%d--打印整型十进制数据
//	//long-长整型
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
//	//年龄
//	//20
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节
//}
//
//
//int num1 = 10;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num2 = 10;//局部变量-定义在代码块（{}）之内的变量
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//局部变量和全局变量的名字建议不要相同，容易误会产生bug，当它们名字相同的时候，局部变量要优先。
//局部变量的作用域
//全局变量的作用域-整个工程
//未声明的标识符要声明
//声明extern外部符号的
//int mian()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);//会报错，因为a的声明只能在括号范围内使用
//	return 0;
//}

//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	
//	//c语言语法规定，变量要定义在当前代码块的最前面
//	sum=num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
