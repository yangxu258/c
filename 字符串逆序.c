#include<stdio.h>
#include<string.h>

void reserve(char* str)
{
	int temp;
	int len=strlen(str);
	char* left=str;
	char* right=str+len-1;
	while(left<right)
	{
		temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}
void main()


{
	char arr[256]={0};
	gets(arr);//��ȡһ�У������ո�
	reserve(arr);
	printf("%s\n",arr);
}