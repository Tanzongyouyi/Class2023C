#include <stdio.h>
//forѭ���﷨
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i); //�� ��ʼ��;�ж�;����
	}
}