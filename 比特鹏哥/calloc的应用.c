#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<errno.h>
int main()
{
	//calloc��malloc�����ڶ�̬�ڴ��п���һ��ռ䣬
	//mallocЧ�ʸߵ����ܳ�ʼ����
	//��callocЧ���Ե͵��Ὣÿ��Ԫ�س�ʼ��Ϊ0
	int* p=(int*)calloc(10, sizeof(int));//������ٵĿռ�̫��᷵�ؿ�ָ��
	if (p == NULL)
	{
		//��ӡ������Ϣ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//��ֵ����ӡ
		int i;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	
	//�ͷ�p����ֵΪ��ָ��
	free(p);
	p = NULL;
	return 0;
}