#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	printf("%.3f\n", sin(n));
//	return 0;
//}

int main()
{
	float x;
	scanf("%f", &x);
	printf("%.3f\n", sin(x/180*PI));
	return 0;
}