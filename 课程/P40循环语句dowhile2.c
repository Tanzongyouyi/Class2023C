//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>

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
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 }; //123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", &password);
//		//if(password == "123456") ��������Ǵ��!!!
//		if (strcmp(password, "123456") == 0) //ר�õıȽϺ���
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������,��������\n");
//	}
//	if (i == 3)
//		printf("�������������,�˳�����\n");
//	return 0;
//}

//��������Ϸ
/*
* �Զ�����1-100֮�����
* ������
* �¶��ˣ��͹�ϲ������
* �´��ˣ�������´��˻��ǲ�С�ˣ�ֱ���¶�
* һ����Ϸһֱ�棬ֱ���˳���Ϸ
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
//	//1.���������
//	int ret = rand()%100+1;//����֮ǰҪ������srand
//	//printf("%d\n", ret);
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
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
//		menu();//��ӡһ���˵�
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}