#include<stdio.h>
//发生了一件谋杀案，警察通过排查确定凶手必为四个中嫌疑犯中的一个
//以下为四个嫌疑犯的供词
//a说:不是我
//b说:是c
//c说:是d
//d说:c在胡说
//已知三个人说了真话，一个人说了假话
void main()

{
	char killer=0;
	for(killer='a';killer<='d';killer++)
	{
		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
			printf("killer=%c\n",killer);
	}
}