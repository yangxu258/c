#define _CRT_SECURE_NO_WARNINGS 1
//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//1.程序分析：在10万以内判断，先将该数加上100后再开方，
//再将该数加上268后再开方，如果开方后的结果满足如下条件，即是结果。
#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y;
	for (i = 0; i <= 100000; i++)
	{
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		//如果一个数的平方根的平方等于该数，这说明此数是完全平方数
		if ((x * x == i + 100) && (y * y == i + 268))
		{
			printf("该数为:%d\n", i);
		}
	}
	return 0;
}
