#define _CRT_SECURE_NO_WARNINGS 1


#include<string.h>
#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺����������ȡ���ػ�\n������");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp����
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//��һ����ʽ��while
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - ִ��ϵͳ�����
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺����������ȡ���ػ�\n������");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp����
		{
			system("shutdown -a");
			break;
		}
	}
	
	return 0;
}