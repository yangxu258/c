#include<stdio.h>
#include<assert.h>

/*void my_strcpy(char* dest,char* str)
{

	while(*str!='\0')
	{
		*dest=*str;
		str++;
		dest++;
	}
	*dest=*str;
	
}*/
/*void my_strcpy(char* dest,char* str)
{
	assert(dest!=NULL);			//assertΪ�ٻᱨ��ʹ��ʱ����ͷ�ļ�<assert.h>||����
	assert(str!=NULL);
	while(*dest++=*str++)
	{
		;
	}
}*/

//����ʵ��
char* my_strcpy(char* dest,const char* str)
{
	char* ret=dest;
	assert(dest!=NULL);
	assert(str!=NULL);
	while(*dest++=*str++)
	{
		;
	}
	return ret;

}

void main()

{
	char arr1[]="#######################";
	char arr2[]="bit";
	//�ַ�������
	printf("%s\n",my_strcpy(arr1,arr2));
}