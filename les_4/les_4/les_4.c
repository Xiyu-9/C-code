#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	int age = 10;
//	if(age<18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n"); 
//	}
//	/*if(age<18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//	//if (age < 18)
//	//	printf("δ����\n");
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
//	//	printf("hehe\n");//  = ��ֵ == �ж����
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	/*case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		{//switch����Ƕ��ʹ��
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
// EOF - end of file -> -1 �ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//	//putchar();
//	//printf("%c\n",ch);
// int ret=0;
// printf("���������룺>");
// scanf("%s",password);//�������룬�������password������
// ��������ʣ��һ��'\n'�������ж���ַ���
// ��ȡһ��'\n'
// while((ch=getchar())!='\n')
// {
//		;
// }
// printf("��ȷ�ϣ�Y/N��:>��");
// ret=getchar();
// if(ret=='Y')
// {
//		printf("ȷ�ϳɹ�\n");
// }else
// {
//		printf("ȷ��ʧ��\n");
// }
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//��������ѭ����for����ڲ�Ƕ��ѭ��
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
//	for (;;)//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//	{
//		//���ǣ�forѭ���� �жϲ���  �����ʡ�ԣ����ж��������Ǻ�Ϊ��
//		//������Ƿǳ�����,���鲻Ҫ���ʡ��
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

//���� 1!+2!+3!+����+10!
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
//			ret = ret * n;//n�Ľ׳�
//			sum = sum + ret;
//			//ret = ret * i;
//		}
//		//sum = sum + ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n��
//��дint binary_search(int x, int v[], int n);
//���ܣ���v[0] <= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x.
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
////�Ż�:���ֲ����㷨/�۰����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



// ��д���룬��ʾ����ַ��������ƶ������м���
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
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//�ַ�������һ��'\0',���Լ�2
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else 
//		{
//			printf("�������\n");
//		}
//
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}



//�Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3 
//	//�㷨ʵ��
//	//a�����ֵ
//	//b��֮
//	//c�з���Сֵ
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


//��ӡ3�ı���
//��ӡ100����3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//	}
//}


//���������������������������Լ��
//շת�����
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//��0�ͻ�����
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//��ӡ����
//��ӡ1000�굽2000��֮�������
//int mian()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1���ܱ�4�������Ҳ��ܱ�100����������
//		//2���ܱ�400����������
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



//��ӡ����
//��ӡ100-200֮�������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i+=2)//i+=2�Ż�ʡ����һ�룬��Ϊż���ز�������
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1���Գ���
//		//13 1-12
//		//����2->i-1
//		// i=a*b;a��b�б���һ��<=��ƽ��i
//		//sqrt-��ƽ������ѧ�⺯��
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
//<��������n�־���>


//��9�ĸ�����1-100�к���9�����ĸ���
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


//������ͣ�����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100��ֵi����ӡ�����
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


//�����ֵ����10�������е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//���ֵ
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


//����Ļ�����һ��9*9�˷��ھ���
//1*1=1
//2*1=1 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
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