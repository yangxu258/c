#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����s = a + aa + aaa + aaaa + aa...a��ֵ������a��һ�����֡�
//		����2 + 22 + 222 + 2222 + 22222(��ʱ����5�������)������������м��̿��ơ�
//1.����������ؼ��Ǽ����ÿһ���ֵ��
#include<stdio.h>
int main()
{
	int a, sn=0, count,tn=0;
	scanf("%d%d", &a, &count);
	int i;
	for (i = 0; i < count; i++)
	{
		tn = tn + a;
		sn = sn + tn;
		tn = a * 10;
	}
	printf("%d", sn);
	return 0;
}