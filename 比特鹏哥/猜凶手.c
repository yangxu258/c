#include<stdio.h>
//������һ��ıɱ��������ͨ���Ų�ȷ�����ֱ�Ϊ�ĸ������ɷ��е�һ��
//����Ϊ�ĸ����ɷ��Ĺ���
//a˵:������
//b˵:��c
//c˵:��d
//d˵:c�ں�˵
//��֪������˵���滰��һ����˵�˼ٻ�
void main()

{
	char killer=0;
	for(killer='a';killer<='d';killer++)
	{
		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
			printf("killer=%c\n",killer);
	}
}