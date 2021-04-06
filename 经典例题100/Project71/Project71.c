#define _CRT_SECURE_NO_WARNINGS 1
//题目：编写input()和output()函数输入，输出5个学生的数据记录。
#include<stdio.h>
#define N 5
typedef struct student
{
	char num[6];
	char name[20];
	int score;
}stu;
void input(stu s[N])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d个人的信息\n", i + 1);
		printf("请输入学号:>");
		scanf("%s", s[i].num );
		printf("请输入姓名:>");
		scanf("%s", s[i].name);
		printf("请输入分数:>");
		scanf("%d", &s[i].score);
	}
}
void output(stu s[N])
{
	int i;
	printf("%10s", "学号");
	printf("%10s", "姓名");
	printf("%10s", "分数");
	for (i = 0; i < N; i++)
	{
		printf("%10s",s[i].num);
		printf("%10s", s[i].name);
		printf("%10s\n", s[i].score);
	}
	
}
int main()
{
	stu s[N] = { 0 };
	input(s);
	output(s);
	return 0;
}