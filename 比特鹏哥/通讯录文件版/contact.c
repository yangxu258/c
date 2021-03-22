#include"contact.h"
//实现初始化通讯录结构体函数
void Initcontact(struct contact* ps)
{
	(ps->size) = 0;
	memset(ps->date, 0, sizeof(ps->date));
	//把文件中已有的数据加载到通讯录中


}
//实现添加信息函数
void Addcontact(struct contact* ps)
{
	if (ps->size == 1000)
	{
		printf("通讯录已占满，添加失败\n");
	}
	else
	{
		printf("请输入名字:->");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄:->");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入性别:->");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入地址:->");
		scanf("%s", ps->date[ps->size].addr);
		printf("请输入电话:->");
		scanf("%s", ps->date[ps->size].tele);
		ps->size++;
		printf("添加成功\n");
		
	}
}

//实现打印通讯录函数
void Showcontact(const struct contact* ps)
{
	if (ps->size == 0)
		printf("通讯录为空");
	else
	{
		int i;
		printf("%-10s\t%-5s\t%-5s\t%-40s\t%-10s\n", "姓名", "年龄", "性别", "地址", "电话");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-5d\t%-5s\t%-40s\t%-10s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].addr,
				ps->date[i].tele);
		}
	}
}
//实现查找下标函数并返回下标，如果没有则返回-1
int Findbyname(struct contact* ps, char name[NAME_MAX])
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (0==strcmp(ps->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
//实现删除信息函数
void Delcontact(struct contact* ps)
{
	//1.查找删除名字信息的下标
	char name[NAME_MAX];
	printf("请输入删除联系人的名字:->");
	scanf("%s", name);
	//查找下标并返回
	int ret=Findbyname(ps, name);
	//2.根据姓名删除信息------该下标后所有信息向前移位
	if (ret == -1)
	{
		printf("通讯录中没有找到该联系人的信息\n");
	}
	else
	{
		int j;
		for (j = ret; j <ps->size-1 ; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
//实现查找信息函数
void Searchcontact(const struct contact* ps)
{
	//1.查找删除名字信息的下标
	char name[NAME_MAX];
	printf("请输入查找联系人的名字:->");
	scanf("%s", name);
	//查找下标并返回
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("通讯录中没有找到该联系人的信息\n");
	}
	else
	{
		//打印查找到的信息
		printf("%-10s\t%-5s\t%-5s\t%-40s\t%-10s\n", "姓名", "年龄", "性别", "地址", "电话");
			printf("%-10s\t%-5d\t%-5s\t%-40s\t%-10s\n",
				ps->date[ret].name,
				ps->date[ret].age,
				ps->date[ret].sex,
				ps->date[ret].addr,
				ps->date[ret].tele);
	}
}
//实现修改信息函数
void Modifycontact(struct contact* ps)
{
	char name[NAME_MAX];
	printf("请输入修改联系人的名字:->");
	scanf("%s", name);
	//查找下标并返回
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("通讯录中没有找到该联系人的信息\n");
	}
	else
	{
		printf("请输入名字:->");
		scanf("%s", ps->date[ret].name);
		printf("请输入年龄:->");
		scanf("%d", &(ps->date[ret].age));
		printf("请输入性别:->");
		scanf("%s", ps->date[ret].sex);
		printf("请输入地址:->");
		scanf("%s", ps->date[ret].addr);
		printf("请输入电话:->");
		scanf("%s", ps->date[ret].tele);
		printf("修改成功\n");
	}
}

//实现保存到文件函数
void Savecontact(struct contact* ps)
{
	FILE* pfwrite = fopen("text.txt", "wb");
	if (pfwrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//写通讯录数据到文件中
	int i;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->date[i]), sizeof(struct firendship), 1, pfwrite);
	}
	printf("保存成功\n");
	fclose(pfwrite);
	pfwrite = NULL;
}