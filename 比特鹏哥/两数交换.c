#include<stdio.h>

void main()


{
	int a=3;
	int b=5;
	//��ʱ�������������
	//int temp=0;
	//temp=a;
	//a=b;
	//b=temp;

	//�Ӽ���������̫������
	//a=a+b;
	//b=a-b;
	//a=a-b;

	//���
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d\nb=%d\n",a,b);
}