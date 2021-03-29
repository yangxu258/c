#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//初始化的实现
void SeqListInit(struct SeqList* ps)
{
	//开辟一个4个元素大小的空间
	ps->a = (SeqListtype*)malloc(sizeof(SeqListtype) * 4);
	if (ps->a == NULL)
	{
		printf("内存申请失败\n");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}
//增容函数的实现
void SeqListcheckcapacity(struct SeqList* ps)
{
	//判断是否增容
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = realloc(ps->a, sizeof(SeqListtype) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("申请内存失败");
			return;
		}
	}
}
//末尾添加数据的实现
void SeqListpushback(struct SeqList* ps, SeqListtype x)
{
	assert(ps);
	SeqListcheckcapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//末尾删除数据的实现
void SeqListpopback(struct SeqList* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
//开头添加数据的实现
void SeqListpushfront(struct SeqList* ps, SeqListtype x)
{
	int end = ps->size - 1;
	SeqListcheckcapacity(ps);
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[end+1] = x;
	ps->size++;
}
//开头删除数据的实现
void SeqListpopfront(struct SeqList* ps)
{
	int start = 0;
	while (start<ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
//任意位置添加数据的实现
void SeqListinsert(struct SeqList* ps, int pos, SeqListtype x)
{
	assert(ps);
	assert(pos < ps->size);
	SeqListcheckcapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
//任意位置删除数据的实现
void SeqListerash(struct SeqList* ps, int pos)
{
	assert(ps);
	assert(pos < ps->size);
	int start = pos;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
	}
	ps->size--;
}
//查找数据的实现
int SeqListfind(struct SeqList* ps, SeqListtype x)
{
	int i=0;
	while (i < ps->size)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//打印数据的实现
void SeqListprint(struct SeqList* ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
//摧毁动态内存的声明
void SeqListdestory(struct SeqList* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
}
