#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ��
//		�����������ף���10�η�����ߣ�
#include<stdio.h>
int main()
{
	float h = 100,sn=0;
	int n = 0;
	sn = sn + h;
	while (n<10)
	{
		h /= 2;
		sn = sn + 2 * h;
		n++;
	}
	printf("sn=%f h=%f\n", sn, h);
	return 0;
}


//void main()
//{
//	float sn = 100.0, hn = sn / 2;
//	int n;
//	for (n = 2; n <= 10; n++)
//	{
//		sn = sn + 2 * hn;/*��n�����ʱ������������*/
//		hn = hn / 2;/*��n�η����߶�*/
//	}
//	printf("the total of road is %f\n", sn);
//	printf("the tenth is %f meter\n", hn);
//}
