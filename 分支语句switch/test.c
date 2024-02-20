//分支语句 - switch语句 - 用于多分支的情况

//输入1，输出星期一
//输入1，输出星期二
//输入1，输出星期三
//输入1，输出星期四
//输入1，输出星期五
//输入1，输出星期六
//输入1，输出星期七

//switch（整形表达式）
//{
//		语句项; 
//}

//语句项
//是一些case语句
//如下
//case 整形常量表达式;
//	语句;

//在 switch 语句中，每个 case 分支如果没有使用 break 关键字，程序会顺序执行下一个 case 分支。
//这意味着无论输入的 day 是多少，它都会从第一个匹配的 case 开始一直执行到最后一个 case。

#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n"); 
		break;
	case 7:
		printf("星期日\n");
		break;
	default:	//增加 default 分支处理非有效输入的情况
		printf("无效的输入，请输入1-7之间的数字。\n");
		break;


	}
	return 0;
}