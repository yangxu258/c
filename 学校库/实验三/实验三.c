#define _CRT_SECURE_NO_WARNINGS 1
1����д����ʵ�֣����뻪���¶�F�����������Ӧ�������¶ȡ��ɻ����¶�F�������¶�C�Ĺ�ʽΪ��C=5/9*(F-32)
#include<stdio.h>
int main()
{
	int F;
	float C;
	scanf("%d", &F);
	C = 5 / 9.0 * (F - 32);
	printf("C=%.2lf��\n", C);
	return 0;
}

2����д����ʵ�֣�����ѧ�������ġ���ѧ��Ӣ�����4�ſγ̵ĳɼ��������ѧ�����ܳɼ���ƽ���ɼ��������
#include<stdio.h>
int main()
{
	float A, B, C, D;
	printf("����:>");
	scanf("%f", &A);
	printf("��ѧ:>");
	scanf("%f", &B);
	printf("Ӣ��:>");
	scanf("%f", &C);
	printf("����:>");
	scanf("%f", &D);
	printf("sum=%.1f\n", A + B + C + D);
	printf("average=%.1f\n", (A + B + C + D) / 4.0);
	return 0;
}


3����д����ʵ�֣�����һԪ���η���ax2 + bx + c������ϵ��a, b, c�����㲢���ʵ��������ʵ��Ϊ��
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c,A;
	double x1, x2;
	scanf("%d%d%d", &a, &b, &c);
	A = b * b - 4 * a * c;
	x1 = (-b + sqrt(A)) / (2.0 * a);
	x2 = (-b - sqrt(A)) / (2.0 * a);
	if (A < 0)
	{
		printf("�޽�\n");
	}
	else if(A==0)
	{
		printf("x1=x2=%.2lf\n", x1);
	}
	else
	{
		printf("x1=%.2lf\nx2=%.2lf\n", x1, x2);
	}

	return 0;
}

4.��д����ʵ�֣������������룩һ����д��ĸ�������Ӧ��Сд��ĸ��������A, ���a
#include<stdio.h>
int main()
{
	char letter;
	scanf("%c", &letter);
	printf("%c\n", letter + 32);
	return 0;
}