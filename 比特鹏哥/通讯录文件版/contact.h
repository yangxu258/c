#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<string.h>
#include<errno.h>
//ö�ٴ��ѡ������
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
//ö�ٴ����ϵ����Ϣ��С
enum ship_date
{
	MAX=1000,
	NAME_MAX = 20,
	SEX_MAX = 5,
	ADDR_MAX = 40,
	TELE_MAX = 12

};
//����������Ϣ
struct firendship
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
};

//����ͨѶ¼���ͣ���ʱ��¼�����Ϣ����
struct contact
{
	struct firendship date[MAX];
	int size;
};

//������ʼ������
void Initcontact(struct contact* ps);
//���������Ϣ����
void Addcontact(struct contact* ps);
//������ӡͨѶ¼
void Showcontact(const struct contact* ps);
//����ɾ����Ϣ����
void Delcontact(struct contact* ps);
//����������Ϣ����
void Searchcontact(const struct contact* ps);
//�����޸���Ϣ����
void Modifycontact(struct contact* ps);
//�������浽�ļ�����
void Savecontact(struct contact* ps);




