#include<stdio.h>
#include<stddef.h>
//����һ���ṹ������
struct stu
{
	char name;
	char sax;
	int age;
};
int main()
{
	printf("%d\n", offsetof(struct stu,name));
	printf("%d\n", offsetof(struct stu, sax));
	printf("%d\n", offsetof(struct stu, age));//offsetof�����ṹ���ƫ��������ͷ�ļ�Ϊstddef.h
}