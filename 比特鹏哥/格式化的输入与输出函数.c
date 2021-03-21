#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建结构体
struct S
{
	int n;
	float m;
	char name[20];
};
//int main()
//{
//	//结构体的初始化
//	struct S s = { 100,3.14f,"yangxu" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输出函数
//	fprintf(pf, "%d %lf %s", s.n, s.m,s.name);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//结构体的初始化
	struct S s = {0};
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//格式化的输入函数
	fscanf(pf, "%d %f %s", &(s.n), &(s.m), s.name);
	printf("%d %f %s", s.n, s.m, s.name);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}