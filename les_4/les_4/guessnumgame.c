#define _CRT_SECURE_NO_WARNINGS 1



//��������Ϸ
//1.���Ի�����һ�������
//2.������
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************************");
	printf("****         1.play  0.exit        ****");
	printf("***************************************");


}

//RAND-MAX-32767
void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;//���ղµ�����
	//��ʱ����������������������ʼ��
	//time_t time(time_t *timer)
	//time_t
	

	//ʱ���
	//��ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.1.1.0��0��0��=��xxx����

	ret=rand()%100+1;//����1-100֮�������
	//printf("%d\n",ret);
	//2.������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}