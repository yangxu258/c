#define _CRT_SECURE_NO_WARNINGS 1
//题目：求一个3 * 3矩阵对角线元素之和
//1.程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。
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