#include<stdio.h>
//����ˮ��һƿ��ˮһ��Ǯ��������ƿ���Ի�һƿ��ˮ����xԪ�����Ժȶ���ƿ��ˮ
void main()

{
	int money=0;
	int total=0;
	int temp=0;
	scanf("%d",&money);
	//1.
	//�ȵ���ˮ����
	total=money;
	//����ʣ�µĿ�ƿ
	temp=money;
	while(temp>=2)
	{
		total+=temp/2;
		temp=temp/2+temp%2;
	}
	printf("total=%d\n",total);
	//2.
	/*if(money==0)
	{
		total=0;
	}
	else
	{
		total=2*money-1;
	}*/
}