#include<stdio.h>
//����һ���ṹ��
struct student
{
	char name[20];
	int age;
	char QQ[20];
};


void main()

{
	struct student s={"����",19,"2532257655"};
	struct student *ps=&s;

	printf("����:%s\n",ps->name);//(1)
	printf("����:%d\n",ps->age);
	printf("QQ:%s\n",ps->QQ);

	/*printf("����:%s\n",(*ps).name);(2)
	printf("����:%d\n",(*ps).age);
	printf("QQ:%s\n",(*ps).QQ);*/


	/*printf("����:%s\n",s.name);(3)
	printf("����:%d\n",s.age);
	printf("QQ:%s\n",s.QQ);*/
}