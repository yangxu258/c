#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��������������x, y, z���������������С���������
//1.���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x > y��x��y��ֵ���н�����
//			 Ȼ������x��z���бȽϣ����x > z��x��z��ֵ���н�����������ʹx��С��
//����һ:
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



//������:
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