#define _CRT_SECURE_NO_WARNINGS 1
//题目：企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10% ；
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可可提成7.5 % ；
//20万到40万之间时，高于20万元的部分，可提成5 % ；
//40万到60万之间时高于40万元的部分，可提成3 % ；
//60万到100万之间时，高于60万元的部分，可提成1.5 % ，
//高于100万元时，超过100万元的部分按1 % 提成，
//从键盘输入当月利润I，求应发放奖金总数？
//1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。
#include<stdio.h>
int main()
{
	long i = 0;
	int bonus,bonus1, bonus2, bonus4, bonus6, bonus10;
	scanf("%ld", &i);
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 +  200000* 0.05;
	bonus6 = bonus4 + 200000* 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	if (i <= 100000)
	{
		bonus = i * 0.1;
	}
	if (i > 100000 && i <= 200000)
	{
		bonus = bonus1 + (i - 100000) * 0.075;
	}
	if (i > 200000 && i<= 400000)
	{
		bonus = bonus2 + (i - 200000) * 0.05;
	}
	if (i > 400000 && i <= 600000)
	{
		bonus = bonus4 + (i - 400000) * 0.03;
	}
	if (i > 600000 && i <= 1000000)
	{
		bonus = bonus6 + (i - 600000) * 0.015;
	}
	if (i > 1000000)
	{
		bonus = bonus10 +(i-1000000)* 0.01;
	}
	printf("%d\n", bonus);
	return 0;
}
