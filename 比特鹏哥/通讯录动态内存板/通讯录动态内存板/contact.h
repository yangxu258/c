#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define CAPACITY 3
//ö�ٴ��ѡ������
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
//ö�ٴ����ϵ����Ϣ��С
enum ship_date
{
	NAME_MAX = 20,
	SEX_MAX = 5,
	ADDR_MAX = 40,
	TELE_MAX = 12

};
//����������Ϣ
struct friendship
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
	struct friendship* date;//�ṹ��ָ��������Ŷ�̬�ڴ�ĵ�ַ
	int capacity;
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
//����ͨѶ¼����
void Distorycontact(struct contact* con);



