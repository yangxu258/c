#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()

{
	//__FILE__  �ļ�·��
	//__LINE__  ��������
	//__DATE__  ����
	//__TIME__  ʱ��
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("log.txt", "w");
	if (pf == NULL)
	{
		perror("NO the file");
		return 0;
	}
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "%s %d %s %s %d\n",
			__FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	fclose(pf);
	pf = NULL;
}