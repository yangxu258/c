#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
//递归    大量重复运算 
//long long Fib(unsigned int N)
//{
//	return N < 2 ? N : Fib(N - 1) + Fib(N - 2);
//}

long long Fib(unsigned int N)
{
	unsigned int i;
	long long* fibarry=(long long*)malloc(sizeof(long long)*(N+1));
	fibarry[0] = 0;
	if (N == 0)
	{
		return fibarry;
	}
	fibarry[1] = 1;
	for (i = 2; i <= N; i++)
	{
		fibarry[i] = fibarry[i - 1] + fibarry[i - 2];
	}
	return fibarry;
}


int main()
{
	printf("%lld\n", Fib(1000));
	return 0;
}