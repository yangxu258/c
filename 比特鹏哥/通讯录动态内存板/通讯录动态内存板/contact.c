#include"contact.h"
//ʵ�ֳ�ʼ��ͨѶ¼�ṹ�庯��
void Initcontact(struct contact* ps)
{
	ps->date = (struct friendship*)malloc(CAPACITY*sizeof(struct friendship));
	if (ps->date == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = CAPACITY;
}
void checkcontact(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//ʵ������
		struct friendship* ptr=(struct friendship*)realloc(ps->date, (ps->capacity + 2) * sizeof(struct friendship));
		if (ptr != NULL)
		{
			ps->date = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		
	}
}
//ʵ�������Ϣ����
void Addcontact(struct contact* ps)
{
	checkcontact(ps);
	printf("����������:->");
	scanf("%s", ps->date[ps->size].name);
	printf("����������:->");
	scanf("%d", &(ps->date[ps->size].age));
	printf("�������Ա�:->");
	scanf("%s", ps->date[ps->size].sex);
	printf("�������ַ:->");
	scanf("%s", ps->date[ps->size].addr);
	printf("������绰:->");
	scanf("%s", ps->date[ps->size].tele);
	ps->size++;
	printf("��ӳɹ�\n");
	/*
	if (ps->size == 1000)
	{
		printf("ͨѶ¼��ռ�������ʧ��\n");
	}
	else
	{
		printf("����������:->");
		scanf("%s", ps->date[ps->size].name);
		printf("����������:->");
		scanf("%d", &(ps->date[ps->size].age));
		printf("�������Ա�:->");
		scanf("%s", ps->date[ps->size].sex);
		printf("�������ַ:->");
		scanf("%s", ps->date[ps->size].addr);
		printf("������绰:->");
		scanf("%s", ps->date[ps->size].tele);
		ps->size++;
		printf("��ӳɹ�\n");
		
	}*/
}

//ʵ�ִ�ӡͨѶ¼����
void Showcontact(const struct contact* ps)
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��");
	else
	{
		int i;
		printf("%-10s\t%-5s\t%-5s\t%-40s\t%-10s\n", "����", "����", "�Ա�", "��ַ", "�绰");
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
//ʵ�ֲ����±꺯���������±꣬���û���򷵻�-1
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
//ʵ��ɾ����Ϣ����
void Delcontact(struct contact* ps)
{
	//1.����ɾ��������Ϣ���±�
	char name[NAME_MAX];
	printf("������ɾ����ϵ�˵�����:->");
	scanf("%s", name);
	//�����±겢����
	int ret=Findbyname(ps, name);
	//2.��������ɾ����Ϣ------���±��������Ϣ��ǰ��λ
	if (ret == -1)
	{
		printf("ͨѶ¼��û���ҵ�����ϵ�˵���Ϣ\n");
	}
	else
	{
		int j;
		for (j = ret; j <ps->size-1 ; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
//ʵ�ֲ�����Ϣ����
void Searchcontact(const struct contact* ps)
{
	//1.����ɾ��������Ϣ���±�
	char name[NAME_MAX];
	printf("�����������ϵ�˵�����:->");
	scanf("%s", name);
	//�����±겢����
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("ͨѶ¼��û���ҵ�����ϵ�˵���Ϣ\n");
	}
	else
	{
		//��ӡ���ҵ�����Ϣ
		printf("%-10s\t%-5s\t%-5s\t%-40s\t%-10s\n", "����", "����", "�Ա�", "��ַ", "�绰");
			printf("%-10s\t%-5d\t%-5s\t%-40s\t%-10s\n",
				ps->date[ret].name,
				ps->date[ret].age,
				ps->date[ret].sex,
				ps->date[ret].addr,
				ps->date[ret].tele);
	}
}
//ʵ���޸���Ϣ����
void Modifycontact(struct contact* ps)
{
	char name[NAME_MAX];
	printf("�������޸���ϵ�˵�����:->");
	scanf("%s", name);
	//�����±겢����
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		printf("ͨѶ¼��û���ҵ�����ϵ�˵���Ϣ\n");
	}
	else
	{
		printf("����������:->");
		scanf("%s", ps->date[ret].name);
		printf("����������:->");
		scanf("%d", &(ps->date[ret].age));
		printf("�������Ա�:->");
		scanf("%s", ps->date[ret].sex);
		printf("�������ַ:->");
		scanf("%s", ps->date[ret].addr);
		printf("������绰:->");
		scanf("%s", ps->date[ret].tele);
		printf("�޸ĳɹ�\n");
	}
}

void Distorycontact(struct contact* ps)
{
	free(ps->date);
	ps->date = NULL;
}