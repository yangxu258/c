#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define CAPACITY 3
//枚举存放选项名字
enum clect
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
};
//枚举存放联系人信息大小
enum ship_date
{
	NAME_MAX = 20,
	SEX_MAX = 5,
	ADDR_MAX = 40,
	TELE_MAX = 12

};
//创建朋友信息
struct friendship
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
};

//创建通讯录类型，随时记录存放信息个数
struct contact
{
	struct friendship* date;//结构体指针用来存放动态内存的地址
	int capacity;
	int size;
};

//声明初始化函数
void Initcontact(struct contact* ps);
//声明添加信息函数
void Addcontact(struct contact* ps);
//声明打印通讯录
void Showcontact(const struct contact* ps);
//声明删除信息函数
void Delcontact(struct contact* ps);
//声明查找信息函数
void Searchcontact(const struct contact* ps);
//声明修改信息函数
void Modifycontact(struct contact* ps);
//销毁通讯录函数
void Distorycontact(struct contact* con);



