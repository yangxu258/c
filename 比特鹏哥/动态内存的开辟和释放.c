#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//����10�����Ϳռ�
	int* p=(int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//��ӡpΪ��ָ��ʱ����Ӧ�Ĵ�����Ϣ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//ʹ�ÿ��ٵ����Ϳռ�
		int i;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		//��ӡ
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//�ͷ�ָ��p
	free(p);
	//��ָ��p����ɾ��
	p = NULL;
	return 0;
}