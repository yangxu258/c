#include<stdio.h>

/*int count_bit_one(unsigned int n)
{
	int count=0;
	while(n)
	{
		if((n%2)==1)
			count++;
		n=n/2;
	}
	return count;
}*/
//00000000000000000000000000011010

int count_bit_one(int n)
{
	int count=0;

	while(n)
	{
		n=n&(n-1);//ÿ��ȥ�����������ߵ�1
		count++;
	}
	return count;//�׼��Ч�ķ���
}
void main()

{
	int a,count;
	scanf("%d",&a);
	count=count_bit_one(a);
	printf("count=%d\n",count);
}