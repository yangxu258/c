#define _CRT_SECURE_NO_WARNINGS 1
//题目：求s = a + aa + aaa + aaaa + aa...a的值，其中a是一个数字。
//		例如2 + 22 + 222 + 2222 + 22222(此时共有5个数相加)，几个数相加有键盘控制。
//1.程序分析：关键是计算出每一项的值。
#include<stdio.h>
int main()
{
	int a, sn=0, count,tn=0;
	scanf("%d%d", &a, &count);
	int i;
	for (i = 0; i < count; i++)
	{
		tn = tn + a;
		sn = sn + tn;
		tn = a * 10;
	}
	printf("%d", sn);
	return 0;
}