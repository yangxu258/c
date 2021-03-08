#include<stdio.h>
#include<ctype.h>
int main()
{
	char arr[] = "I am STudent";
	int i=0;
	while (arr[i])
	{
		if (isupper(arr[i]))//判断是否为大写字符
		{
			arr[i] = tolower(arr[i]);//把大写字符转化为小写字符
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}