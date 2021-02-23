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
	assert(dest!=NULL);			//assert为假会报错，使用时引用头文件<assert.h>||断言
	assert(str!=NULL);
	while(*dest++=*str++)
	{
		;
	}
}*/

//满分实现
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
	//字符串拷贝
	printf("%s\n",my_strcpy(arr1,arr2));
}