#include <stdio.h>

//do while�﷨
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//��ϰһ
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m *= i;
//	}
//	printf("%d\n", m);
//	return 0;
//}

//��ϰ��
//int main()
//{
//	int n = 0;
//	int num = 0;
//	int i = 1, b = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		b *= i;
//		num += b;
//	}
//	printf("%d\n", num);
//	return 0;
//}

//��ϰ�� ���ַ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
	int k = 6;//Ҫ���ҵ�����
	int left = 0;
	int right = sz-1;//9

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid > k])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}