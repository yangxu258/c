#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
menu()
{
	printf("*****************************************\n");
	printf("*****1.Add               2.Del      *****\n");
	printf("*****3.Search            4.Modify   *****\n");
	printf("*****5.Show              6.Sort     *****\n");
	printf("*****7.Save              0.Exit     *****\n");
	printf("*****************************************\n");
}
text()
{
	//����ͨѶ¼->1000�����ѵ���Ϣ
	int input = 0;
	struct contact con;//con����ͨѶ¼ ������1000���˵���Ϣ��size
	//��ͨѶ¼��ʼ��
	Initcontact(&con);
	do {
		menu();
		printf("��ѡ��:->");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			Addcontact(&con);
			break;
		case Del:
			Delcontact(&con);
			break;
		case Search:
			system("cls");
			Searchcontact(&con);
			break;
		case Modify:
			Modifycontact(&con);
			break;
		case Show:
			system("cls");
			Showcontact(&con);
			break;
		case Sort:
			break;
		case Save:
			Savecontact(&con);
			break;
		case Exit:
			Savecontact(&con);
			printf("�����˳�\n");
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}