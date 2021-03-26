#define _CRT_SECURE_NO_WARNINGS 1
//题目：输入三个整数x, y, z，请把这三个数由小到大输出。
//1.程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x > y则将x与y的值进行交换，
//			 然后再用x与z进行比较，如果x > z则将x与z的值进行交换，这样能使x最小。
//方法一:
#include<stdio.h>
//int main()
//{
//	int x, y, z,temp;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (x > z)
//	{
//		temp = x;
//		x = z;
//		z = temp;
//	}
//	if (y > z)
//	{
//		temp = y;
//		y = z;
//		z = temp;
//	}
//	printf("%d<%d<%d", x, y, z);
//	return 0;
//}



//方法二:
void compare(int* a, int* b)
{
	int temp;
	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	compare(&x, &y);
	compare(&x, &z);
	compare(&y, &z);
	printf("%d<%d<%d", x, y, z);
	return 0;
}