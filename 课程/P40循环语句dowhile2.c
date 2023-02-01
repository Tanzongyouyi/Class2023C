//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>

//练习4
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr2[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//联系5
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 }; //123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", &password);
//		//if(password == "123456") 这个代码是错的!!!
//		if (strcmp(password, "123456") == 0) //专用的比较函数
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误,重新输入\n");
//	}
//	if (i == 3)
//		printf("三次密码均错误,退出程序\n");
//	return 0;
//}

//猜数字游戏
/*
* 自动产生1-100之间的数
* 猜数字
* 猜对了，就恭喜，结束
* 猜错了，告诉你猜大了还是猜小了，直到猜对
* 一个游戏一直玩，直到退出游戏
*/

//void menu()
//{
//	printf("####################\n");
//	printf("#     1.play       #\n");
//	printf("#     0.exit       #\n");
//	printf("####################\n");
//}
//
//void game()
//{
//	//1.生成随机数
//	int ret = rand()%100+1;//在这之前要先设置srand
//	//printf("%d\n", ret);
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//打印一个菜单
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}