#include<stdio.h>
//创建一个结构体
struct student
{
	char name[20];
	int age;
	char QQ[20];
};


void main()

{
	struct student s={"杨旭",19,"2532257655"};
	struct student *ps=&s;

	printf("姓名:%s\n",ps->name);//(1)
	printf("年龄:%d\n",ps->age);
	printf("QQ:%s\n",ps->QQ);

	/*printf("姓名:%s\n",(*ps).name);(2)
	printf("年龄:%d\n",(*ps).age);
	printf("QQ:%s\n",(*ps).QQ);*/


	/*printf("姓名:%s\n",s.name);(3)
	printf("年龄:%d\n",s.age);
	printf("QQ:%s\n",s.QQ);*/
}