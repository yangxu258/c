#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ṹ��
struct S
{
	int n;
	float m;
	char name[20];
};
//int main()
//{
//	//�ṹ��ĳ�ʼ��
//	struct S s = { 100,3.14f,"yangxu" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ�����������
//	fprintf(pf, "%d %lf %s", s.n, s.m,s.name);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//�ṹ��ĳ�ʼ��
	struct S s = {0};
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//��ʽ�������뺯��
	fscanf(pf, "%d %f %s", &(s.n), &(s.m), s.name);
	printf("%d %f %s", s.n, s.m, s.name);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}