#include<stdio.h>

int my_strlen(char* str)
{
	char* start=str;
	char* end=str;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;
}


void main()

{
	char arr[]="bit";
	int len=my_strlen(arr);
	printf("%d\n",len);
}