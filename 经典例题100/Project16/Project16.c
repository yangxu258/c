#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����������������m��n���������Լ������С��������
//1.�������������շ������

#include<stdio.h>
int main()
{
	int num1, num2, temp, a, b;
	scanf("%d%d", &num1, &num2);
	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	a = num1; b = num2;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("%d\n", a);//���Լ��
	printf("%d\n", num1 * num2 / a);//��С������
	return 0;
}
