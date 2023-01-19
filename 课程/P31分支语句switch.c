//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//switch语句可以嵌套使用

//语法:
//switch (整型表达式)
//{
//	case 整型变量表达式;
//		语句;
//}

//举个栗子
//int main()
//{
//	int day = 0; // 变量day只能是整型
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1: //注意!这里是冒号
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
//	    break;
//	}
//}

//输入1-5输出工作日  输入6-7输出休息日
//int main()
//{
//	int day = 0; // 变量day只能是整型
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1: //注意!这里是冒号
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//	    break;
//	}
//}

//default子句
//int main()
//{
//	int day = 0; // 变量day只能是整型
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1: //注意!这里是冒号
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
//	    break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//}