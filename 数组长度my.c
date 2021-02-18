#include<stdio.h>

/*int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}*/


int my_strlen(char* str)
{
	if(*str!='\0')
	{
		return 1+my_strlen(str+1);
	}
	else
		return 0;
}
void main()

{
	char arr[]="bit C";
	int len=0;
	len = my_strlen(arr);//传递arr数组的首地址
	printf("len=%d\n",len);
}