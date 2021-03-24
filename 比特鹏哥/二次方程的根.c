#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float x1, x2,A;
	A = b * b - 4 * a * c;
	x1 = (-b + sqrt(A)) / (2* a);
	x2 = (-b - sqrt(A)) / (2* a);
	printf("x1=%f\nx2=%f\n", x1, x2);
	return 0;
}