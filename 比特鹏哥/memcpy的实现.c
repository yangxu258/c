#include<stdio.h>
#include<string.h>//memcpy��ͷ�ļ�Ϊstring.h����memory.h
#include<assert.h>
//����һ���ṹ��
struct stu
{
	char name[30];
	int age;
};
//ʵ��memcpy
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}
int main()
{
	//��������
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}*/
	//�����ṹ��
	struct stu arr3[] = { {"zhangsan",30},{"lisi",35} };
	struct stu arr4[2] = { 0 };
	memcpy(arr4, arr3, sizeof(arr4));
	printf("����:%s\n����:%d\n", arr4[0].name, arr4[0].age);
	printf("����:%s\n����:%d\n", arr4[1].name, arr4[1].age);
}