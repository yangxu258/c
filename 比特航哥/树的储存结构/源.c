#define _CRT_SECURE_NO_WARNINGS 1
#define Tree_size 100
typedef char treetype;
typedef struct CTnode
{
	int child;
	struct CTnode* next;
};
typedef struct
{
	treetype data;
	int parent;
	struct CTnode firstchild;
}ctbox;
typedef struct
{
	ctbox nodes[Tree_size];
};