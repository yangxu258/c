#include"stack.h"
int main()
{
	SQstack s;
	stackType ch;
	int sum = 0, i;
	Initstack(&s);
	printf("�����������λ:");
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
	printf("\nջ��Ԫ�ظ���Ϊ:%d\n", ret);
	for (i = 0; i < ret; i++)
	{
		stackpop(&s, &ch);
		sum += (ch - 48) * (int)pow(2, i);
	}
	printf("ʮ���ƽ��Ϊ:%d\n", sum);
	return 0;
}