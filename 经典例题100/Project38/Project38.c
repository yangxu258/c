#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����һ��3 * 3����Խ���Ԫ��֮��
//1.�������������˫��forѭ�����������ά���飬�ٽ�a[i][i]�ۼӺ������
#include<stdio.h>
int main()
{
	int i=0, j=0, s=0;
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	while (i < 3 && j < 3)
	{
		s += arr[i++][j++];
	}
	printf("%d ", s);
	i = 2, j = 0,s=0;
	while (j < 3)
	{
		s += arr[i--][j++];
	}
	printf("%d ", s);
	return 0;
}