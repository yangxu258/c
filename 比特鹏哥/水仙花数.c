#include<stdio.h>
#include<math.h>

//ˮ�ɻ���:����153=1^3+5^3+3*3

void main()

{
	int i,temp=0;
	for(i=0;i<=100000;i++)
	{
		int sum=0;
		//1.�ж�i��nλ
		int n=1;
		temp=i;
		while(temp/=10)
		{
			n++;
		}
		//2.��ÿλn�η��ĺ�sum
		temp=i;
		
		while(temp)
		{
			sum+=pow(temp%10,n);
			temp/=10;
		}
		//3.�ж�i�Ƿ����sum
		if(i==sum)
			printf("%d ",i);
	}
}