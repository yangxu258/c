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
	//创建通讯录->1000个朋友的信息
	int input = 0;
	struct contact con;//con就是通讯录 包含了1000个人的信息和size
	//将通讯录初始化
	Initcontact(&con);
	do {
		menu();
		printf("请选择:->");
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
			printf("程序退出\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}