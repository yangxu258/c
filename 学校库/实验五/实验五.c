#define _CRT_SECURE_NO_WARNINGS 1
//1.
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if(x>0)
//	{
//		y = 1;
//	}
//	else if (x == 0)
//	{
//		y = 0;
//	}
//	else
//	{
//		y = -1;
//	}
//	printf("y=%d\n", y);
//	return 0;
//}

//2.
//#include<stdio.h>
//int main()
//{
//	float t, s;
//	scanf("%f", &t);
//	if (t > 0 && t < 1)
//	{
//		s = t * t;
//	}
//	else if (t >= 1 && t < 2)
//	{
//		s = t * t - 1;
//	}
//	else if (t >= 2 && t < 3)
//	{
//		s = t * t - 2 * t + 1;
//	}
//	else if (t >= 3 && t < 4)
//	{
//		s = t * t * t + 4 * t;
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	printf("s=%.2f\n", s);
//	return 0;
//}

//3.
//#include<stdio.h>
//int main()
//{
//	char ch;
//	ch = getchar();
//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//	{
//		printf("It is an English character");
//	}
//	else if (ch >= '0' && ch <= '9')
//	{
//		printf("It is an digit character");
//	}
//	else
//	{
//		printf("It is an Other character");
//	}
//	return 0;
//}
//

//4.
//#include<stdio.h>
//int main()
//{
//	int score;
//	char grade;
//	scanf("%d", &score);
//	if (score >= 90 && score <= 100)
//	{
//		grade = 'A';
//	}
//	else if (score >= 80 && score <= 89)
//	{
//		grade = 'B';
//	}
//	else if (score >= 70 && score <= 79)
//	{
//		grade = 'C';
//	}
//	else if (score >= 60 && score <= 69)
//	{
//		grade = 'D';
//	}
//	else if (score >= 0 && score <= 59)
//	{
//		grade = 'E';
//	}
//	else
//	{
//		printf("����ķ��������˷�Χ\n");
//	}
//	printf("grade=%c\n", grade);
//	return 0;
//}


//5.1
//#include<stdio.h>
//int main()
//{
//	float km=0,sum=0;
//	int time;
//	scanf("%f%d", &km, &time);
//	if (km <= 3)
//	{
//		sum = 8;
//	}
//	else if (km > 3 && km <= 10)
//	{
//		sum = 8 + (km - 3) * 2;
//	}
//	else if (km > 10)
//	{
//		sum = 8 + 7 * 2 + (km - 10) * 3;
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	sum = sum + time / 5 * 2;
//	sum = (int)(sum + 0.5);
//	printf("sum=%.0f\n", sum);
//	return 0;
//}



//5.2
#include<stdio.h>
int main()
{
	printf("\nxxxxxxxx��������С����xxxxxxx\n");
	printf("\n������1-4��������Ӧ������\n");
	printf("1----------�ӷ�\n");
	printf("2----------����\n");
	printf("3----------�˷�\n");
	printf("4----------����\n");
	float x, y,ret;
	int operator;
	printf("�����������2������:\n");
	scanf("%f%f", &x, &y);
	printf("�����������(1-4):");
	scanf("%d", &operator);
	switch (operator)
	{
	case 1:
		ret = x + y;
		break;
	case 2:
		ret = x - y;
		break;
	case 3:
		ret = x * y;
		break;
	case 4:
		ret = x / y;
		break;
	default:
		printf("������������\n");
	}
	printf("ret=%f\n", ret);
	return 0;
}