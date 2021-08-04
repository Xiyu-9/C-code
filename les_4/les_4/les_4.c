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

