#define _CRT_SECURE_NO_WARNINGS 1

//��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�
#include<stdio.h>
size_t my_strlen(char* arr)
{
	int count=0,i=0;
	while (arr[i])
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	char arr[50] = { 0 };
	scanf("%s", arr);
	int ret=my_strlen(arr);
	printf("%d", ret);
	return 0;
}