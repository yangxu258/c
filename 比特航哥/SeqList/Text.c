#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void TextSeqList()
{
	struct SeqList s;
	SeqListInit(&s);
	SeqListpushback(&s, 1);
	SeqListpushback(&s, 2);
	SeqListpushback(&s, 3);
	SeqListpushback(&s, 4);
	SeqListpushback(&s, 5);
	SeqListprint(&s);
	printf("\n");
	SeqListpopback(&s);
	SeqListprint(&s);
	printf("\n");
	SeqListpushfront(&s,5);
	SeqListprint(&s);
}
int main()
{
	TextSeqList();
	return 0;
}