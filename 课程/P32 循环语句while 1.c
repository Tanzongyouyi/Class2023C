//while �﷨�ṹ
//while(���ʽ)
//    ѭ���ṹ;
//break ���÷� �������õ���ֹѭ��
//continue���÷� ������������ѭ��continue����Ĵ���,ֱ��ȥ�жϲ���,���Ƿ������һ��ѭ��

#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}