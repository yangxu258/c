#define _CRT_SECURE_NO_WARNINGS 1
1．编写程序实现：输入华氏温度F，计算输出对应的摄氏温度。由华氏温度F求摄氏温度C的公式为：C=5/9*(F-32)
#include<stdio.h>
int main()
{
	int F;
	float C;
	scanf("%d", &F);
	C = 5 / 9.0 * (F - 32);
	printf("C=%.2lf°\n", C);
	return 0;
}

2．编写程序实现：输入学生的语文、数学、英语、物理4门课程的成绩，计算该学生的总成绩和平均成绩并输出。
#include<stdio.h>
int main()
{
	float A, B, C, D;
	printf("语文:>");
	scanf("%f", &A);
	printf("数学:>");
	scanf("%f", &B);
	printf("英语:>");
	scanf("%f", &C);
	printf("物理:>");
	scanf("%f", &D);
	printf("sum=%.1f\n", A + B + C + D);
	printf("average=%.1f\n", (A + B + C + D) / 4.0);
	return 0;
}


3．编写程序实现，输入一元二次方程ax2 + bx + c的三个系数a, b, c，计算并输出实根。两个实根为：
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
		printf("无解\n");
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

4.编写程序实现：给定（或输入）一个大写字母，输出对应的小写字母。如输入A, 输出a
#include<stdio.h>
int main()
{
	char letter;
	scanf("%c", &letter);
	printf("%c\n", letter + 32);
	return 0;
}