#include"stack.h"
int main()
{
	SQstack s;
	stackType ch;
	double d,e;
	char str[10] = {0};
	int i;
	Initstack(&s);
	while ((ch = getchar()) != '#')
	{
		while (isdigit(ch) || ch == '.')
		{
			i = 0;
			str[i] = ch;
			i++;
			if (i >= 10)
			{
				printf("输入单个数据过大\n");
			}
			ch = getchar();
			if (ch == ' ')
			{
				d = atof(str);
				stackpush(&s, ch);
				break;
			}
		}
		switch (ch)
		{
		case '+':
			stackpop(&s, &d);
			stackpop(&s, &e);
			stackpush(&s, d + e);
			break;
		case '-':
			stackpop(&s, &d);
			stackpop(&s, &e);
			stackpush(&s, d - e);
			break;
		case '*':
			stackpop(&s, &d);
			stackpop(&s, &e);
			stackpush(&s, d * e);
			break;
		case '/':
			stackpop(&s, &d);
			stackpop(&s, &e);
			if (e == 0)
				printf("除数为0\n");
			stackpush(&s, d / e);
			break;
		}
	}
	stackpop(&s, &d);
	printf("%f\n", d);
	return 0;
}