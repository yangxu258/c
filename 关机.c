#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
void main()

{
	char input[20]={0};
	system("shutdown -s -t 60");
	
	while(1)
	{
		printf("���ĵ��Խ���60s֮�ڹػ��������룺������   ȡ���ػ�Ӵ~\n(��ܰ��ʾ:�ص�Ҳû����Ӵ!!!)\n");
		scanf("%s",input);
		if(strcmp(input,"������")==0)
		{
			system("shutdown -a");
			break;
		}
		system("cls");
	}
}