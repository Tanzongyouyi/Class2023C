#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>

//��ϰ4
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

//��ϵ5
int main()
{
	int i = 0;
	char password[20] = { 0 }; //123456
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", &password);
		//if(password == "123456") ��������Ǵ��!!!
		if (strcmp(password, "123456") == 0) //ר�õıȽϺ���
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������,��������\n");
	}
	if (i == 3)
		printf("�������������,�˳�����\n");
	return 0;
}