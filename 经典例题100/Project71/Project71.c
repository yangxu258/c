#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼��
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
		printf("�������%d���˵���Ϣ\n", i + 1);
		printf("������ѧ��:>");
		scanf("%s", s[i].num );
		printf("����������:>");
		scanf("%s", s[i].name);
		printf("���������:>");
		scanf("%d", &s[i].score);
	}
}
void output(stu s[N])
{
	int i;
	printf("%10s", "ѧ��");
	printf("%10s", "����");
	printf("%10s", "����");
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