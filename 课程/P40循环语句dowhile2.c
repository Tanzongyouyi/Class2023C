#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>

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
int main()
{
	int i = 0;
	char password[20] = { 0 }; //123456
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", &password);
		//if(password == "123456") 这个代码是错的!!!
		if (strcmp(password, "123456") == 0) //专用的比较函数
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误,重新输入\n");
	}
	if (i == 3)
		printf("三次密码均错误,退出程序\n");
	return 0;
}