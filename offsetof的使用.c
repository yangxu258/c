#include<stdio.h>
#include<stddef.h>
//创建一个结构体类型
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
	printf("%d\n", offsetof(struct stu, age));//offsetof测量结构体的偏移量，其头文件为stddef.h
}