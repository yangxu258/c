#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int SeqListtype;
//创建结构体
struct SeqList
{
	SeqListtype* a;
	int size;//有效数据个数
	int capacity;//容量
};

//结构体初始化的声明
void SeqListInit(struct SeqList* ps);
//增容函数的声明
void SeqListcheckcapacity(struct SeqList* ps);
//末尾添加数据的声明
void SeqListpushback(struct SeqList* ps, SeqListtype x);
//末尾删除数据的声明
void SeqListpopback(struct SeqList* ps);
//开头添加数据的声明
void SeqListpushfront(struct SeqList* ps, SeqListtype x);
//开头删除数据的声明
void SeqListpopfront(struct SeqList* ps);
//任意位置添加数据的声明
void SeqListinsert(struct SeqList* ps,int pos ,SeqListtype x);
//任意位置删除数据的声明
void SeqListearsh(struct SeqList* ps, int pos);
//查找数据的声明
int SeqListfind(struct SeqList* ps,  SeqListtype x);
//打印数据的声明
void SeqListprint(struct SeqList* ps);
//摧毁动态内存的声明
void SeqListdestory(struct SeqList* ps);

