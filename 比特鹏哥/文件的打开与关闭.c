#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	//���ļ���fopen������������һ��FILE*���͵�ָ��
	// 		Ϊ�˲�ʹ\t��Ϊת���ַ������ټ���һ��\
	//���·��
	//. ��ʾ��ǰ·��-��/����
	//..��ʾ��һ��·��
	//FILE* pf = fopen("..\\text.txt", "r");
	//����·��:
	//FILE* pf = fopen("D:\\c���Կ�\\�ļ��Ĵ���ر�\\text.txt", "r");
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}