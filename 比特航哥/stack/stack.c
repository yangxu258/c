#include"stack.h"
void stackprint(SQstack* s)
{
	stackType* i;
	for(i=s->base;i<s->top;i++)
	{
		printf("%d ", *i);
	}
}
void Initstack(SQstack* s)
{
	s->base=(stackType*)malloc(4*sizeof(stackType));
	if(s->base==NULL)
		return;
	s->top=s->base;
	s->stacksize=4;
}
void stackpush(SQstack* s,stackType x)
{
	if(s->top-s->base>=s->stacksize)
	{
		s->base=realloc(s->base,(s->stacksize*2)*sizeof(stackType));
		if(s->base==NULL)
		{
			return;
		}
		s->top=s->base+s->stacksize;
		s->stacksize=s->stacksize*2;
	}
	*(s->top)=x;
	s->top++;
}
void stackpop(SQstack* s, stackType* x)
{
	if (s->base == s->top)
	{
		return;
	}
	s->top--;
	*x = *(s->top);
}
void Clearstack(SQstack* s)
{
	s->base = s->top;
}
void Distorystack(SQstack* s)
{
	int len, i;
	len = s->stacksize;
	for (i = 0; i < s->stacksize; i++)
	{
		free(s->base);
		s->base++;
	}
	s -> base = NULL;
	s->stacksize = 0;
	s->top = NULL;
}
int stacklen(SQstack* s)
{
	return (s->top - s->base);
}