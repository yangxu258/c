#include<stdio.h>
#include<ctype.h>
int main()
{
	char arr[] = "I am STudent";
	int i=0;
	while (arr[i])
	{
		if (isupper(arr[i]))//�ж��Ƿ�Ϊ��д�ַ�
		{
			arr[i] = tolower(arr[i]);//�Ѵ�д�ַ�ת��ΪСд�ַ�
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}