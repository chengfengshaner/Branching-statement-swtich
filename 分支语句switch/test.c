//��֧��� - switch��� - ���ڶ��֧�����

//����1���������һ
//����1��������ڶ�
//����1�����������
//����1�����������
//����1�����������
//����1�����������
//����1�����������

//switch�����α��ʽ��
//{
//		�����; 
//}

//�����
//��һЩcase���
//����
//case ���γ������ʽ;
//	���;

//�� switch ����У�ÿ�� case ��֧���û��ʹ�� break �ؼ��֣������˳��ִ����һ�� case ��֧��
//����ζ����������� day �Ƕ��٣�������ӵ�һ��ƥ��� case ��ʼһֱִ�е����һ�� case��

#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n"); 
		break;
	case 7:
		printf("������\n");
		break;
	default:	//���� default ��֧�������Ч��������
		printf("��Ч�����룬������1-7֮������֡�\n");
		break;


	}
	return 0;
}