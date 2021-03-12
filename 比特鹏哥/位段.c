#include<stdio.h>
//位段——>二进制位
struct stu
{
	char a : 5;
	char b : 4;
	char c : 1;
	char d : 5;
};
int main()
{
	struct stu s = {0};
	s.a = 5;//000 00101 000 1 1010 000 11110
	s.b = 10;
	s.c = 25;
	s.d = 30;
	
}