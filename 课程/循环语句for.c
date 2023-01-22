#include <stdio.h>
//for循环语法
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i); //即 初始化;判断;调整
	}
}