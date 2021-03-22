#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<string.h>
#include<errno.h>
//枚举存放选项名字
enum clect
{
	Exit,//0 1 2 3 4 5 6 7
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
	Save
};
//枚举存放联系人信息大小
enum ship_date
{
	MAX=1000,
	NAME_MAX = 20,
	SEX_MAX = 5,
	ADDR_MAX = 40,
	TELE_MAX = 12

};
//创建朋友信息
struct firendship
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
	struct firendship date[MAX];
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
//声明保存到文件函数
void Savecontact(struct contact* ps);




