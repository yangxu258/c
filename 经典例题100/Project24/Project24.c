#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13...���������е�ǰ20��֮�͡�
//1.�����������ץס�������ĸ�ı仯���ɡ�
#include<stdio.h>
int main()
{
	int n;
	float s = 0, a = 2, b = 1,t;
	for (n = 1; n <= 20; n++)
	{
		s = s + a / b;
		t = a;
		a = a + b;
		b = a;
	}
	printf("%f\n", s);
	return 0;
}