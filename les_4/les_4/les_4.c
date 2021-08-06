#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int age = 10;
//	if(age<18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n"); 
//	}
//	/*if(age<18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//	//if (age < 18)
//	//	printf("未成年\n");
//
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5)
//	//{
//	//	printf("hehe\n");//  = 赋值 == 判断相等
//	//}
//	return 0;
//}


//int main()
//{
//	int i=0;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	/*while (i<= 100)
//	{
//		if (i% 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}*/
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	/*case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;*/
//	}
//	return  0;
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
//		{//switch允许嵌套使用
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
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}



//int main()
//{
//	/*while (1)
//		printf("hehe\n");*/
//	int i = 1;
//	while (i<=10 )
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d", i);
//		
//	}
//}


//int main()
//{
//	int ch = 0;
//	//ctrl+z
// EOF - end of file -> -1 文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//	//putchar();
//	//printf("%c\n",ch);
// int ret=0;
// printf("请输入密码：>");
// scanf("%s",password);//输入密码，并存放在password数组中
// 缓冲区还剩余一个'\n'（或者有多个字符）
// 读取一下'\n'
// while((ch=getchar())!='\n')
// {
//		;
// }
// printf("请确认（Y/N）:>）");
// ret=getchar();
// if(ret=='Y')
// {
//		printf("确认成功\n");
// }else
// {
//		printf("确认失败\n");
// }
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//会陷入死循环，for语句内不嵌套循环
//			printf("haha\n");
//		else
//			printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//for循环的初始化、调整、判断都可以省略
//	{
//		//但是：for循环的 判断部分  如果被省略，那判断条件就是恒为真
//		//如果不是非常熟练,建议不要随便省略
//
//
//		printf("hehe\n");
//		return 0;
//	}
//}

//int main()
//{
//	//1-10
//	int i = 0;
//	do
//	{
//		if(i==5)
//			//break;
//			//continue;  
//		pritnf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//计算 1!+2!+3!+……+10!
//int main()
//{
//	int i = 0;
//	int n=0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum=0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * n;//n的阶乘
//			sum = sum + ret;
//			//ret = ret * i;
//		}
//		//sum = sum + ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n。
//编写int binary_search(int x, int v[], int n);
//功能：在v[0] <= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x.
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
////优化:二分查找算法/折半查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int right = sz - 1;//右下标
//
//	int k = 7;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



// 编写代码，演示多个字符从两端移动，向中间汇聚
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	//welcome to bit!!!
//	//#################
//	//w###############!
//	//we#############!!
//	//....
//	//welcome to bit!!!
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//字符串后有一个'\0',所以减2
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)//==不能用来比较两个字符串是否相等，应当使用一个库函数-strcmp
//
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else 
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}



//从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3 
//	//算法实现
//	//a放最大值
//	//b次之
//	//c中放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//打印3的倍数
//打印100以内3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//	}
//}


//给定两个数，求这两个数的最大公约数
//辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//是0就会跳出
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//打印闰年
//打印1000年到2000年之间的闰年
//int mian()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1、能被4整除并且不能被100整除是闰年
//		//2、能被400整除是闰年
//		
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//打印素数
//打印100-200之间的素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i+=2)//i+=2优化省略了一半，因为偶数必不是素数
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1、试除法
//		//13 1-12
//		//产生2->i-1
//		// i=a*b;a和b中必有一个<=开平方i
//		//sqrt-开平方的数学库函数
//		int j = 0;
//		
//		for (j = 2; j < i<=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//<素数求解的n种境界>


//数9的个数，1-100中含有9的数的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//分数求和，计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100的值i，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	//1/1+1/2+1/3...
//	//1+0+0...=1
//	printf("%lf\n", sum);
//
//	return 0;
//}


//求最大值，求10个整数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//在屏幕上输出一个9*9乘法口诀表
//1*1=1
//2*1=1 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; i++)
//		{
//			printf("%d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{

	return 0;
}