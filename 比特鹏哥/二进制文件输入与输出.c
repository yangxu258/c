#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char name[20];
	int age;
	double score;
};
//int main()
//{
//	struct S s = { "张三",20,90.5 };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制格式化写入
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf =NULL;
//	return 0;
//}




int main()
{
	struct S tem = { 0 };
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//二进制格式化读取
	fread(&tem, sizeof(struct S), 1, pf);
	printf("%s %d %f",tem.name ,tem.age ,tem.score  );
	fclose(pf);
	pf = NULL;
	return 0;
}