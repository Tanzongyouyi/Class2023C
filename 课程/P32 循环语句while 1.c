//while 语法结构
//while(表达式)
//    循环结构;
//break 的用法 用于永久的终止循环
//continue的用法

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