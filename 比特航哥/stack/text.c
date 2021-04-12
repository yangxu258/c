#include"stack.h"
int main()
{
	SQstack s;
	stackType ch;
	int sum = 0, i;
	Initstack(&s);
	printf("请输入二进制位:");
	/*scanf("%c", &ch);
	while (ch != '#')
	{
		stackpush(&s, ch);
		scanf("%c", &ch);
	}*/
	while ((ch = getchar()) != '#')
	{
		stackpush(&s,ch);
	}

	int ret = stacklen(&s);
	printf("\n栈的元素个数为:%d\n", ret);
	for (i = 0; i < ret; i++)
	{
		stackpop(&s, &ch);
		sum += (ch - 48) * (int)pow(2, i);
	}
	printf("十进制结果为:%d\n", sum);
	return 0;
}