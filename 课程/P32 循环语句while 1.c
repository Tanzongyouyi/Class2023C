//while 语法结构
//while(表达式)
//    循环结构;
//break 的用法

#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}